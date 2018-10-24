//Ward's Method
#include <bits/stdc++.h>

using namespace std;

float sample[10][2];
int clas[10][10];

float mse(int c[10][10], int num_s)
{
    float ms = 0.0f;

    float s[num_s][2];
    int cnt[num_s];

    for(int i = 0; i < num_s; i++)
    {
        s[i][0] = 0.0f;
        s[i][1] = 0.0f;
        cnt[i] = 0;
        for(int j = 0; j < num_s; j++)
        {
            if(c[i][j] == 1)
            {
                cnt[i]++;
                s[i][0] += sample[j][0];
                s[i][1] += sample[j][1];
            }
        }
        s[i][0] /= cnt[i];
        s[i][1] /= cnt[i];
    }

    for(int i = 0; i < num_s; i++)
    {
        for(int j = 0; j < num_s; j++)
        {
            if(c[i][j] == 1)
            {
                ms += (pow((sample[j][0] - s[i][0]), 2) + pow((sample[j][1] - s[i][1]), 2));
            }
        }
    }

    cout << "\nDistance : " << ms << endl;

    return ms;
}

int main()
{
    int num_s;
    cout << "Enter number of samples:" << endl;
    cin >> num_s;
    int temp_clas[10][10];

    for(int i = 0; i < num_s; i++)
    {
        for(int j = 0; j < num_s; j++)
        {
            clas[i][j] = -1;
            temp_clas[i][j] = -1;
        }
    }

    cout << "Enter the features of each sample:" << endl;

    for(int i = 0; i < num_s; i++)
    {
        cin >> sample[i][0];
        cin >> sample[i][1];
        clas[i][i] = 1;
        temp_clas[i][i] = 1;
    }

    // print the result
    cout << endl << endl;

    for(int i = 0; i < num_s; i++)
    {
        if(clas[i][i] != -1)
        {
            cout << "{";
            for(int j = 0; j < num_s; j++)
            {
                if(clas[i][j] != -1)
                    cout << (j+1) << ", ";
            }
            cout << "\b\b}, ";
        }
    }


    // clustering

    for(int n = 0; n < num_s-1; n++)
    {


        // clustering
        float min_se = 10000.0f;
        int cluster[2];
        for(int i = 0; i < num_s; i++)
        {
            for(int j = i+1; j < num_s; j++)
            {
                if(clas[i][i] != -1 && clas[j][j] != -1)
                {
                    //copy the previous cluster
                    for(int k =0; k < num_s; k++)
                    {
                        for(int m = 0; m < num_s; m++)
                        {
                            temp_clas[k][m] = clas[k][m];
                        }
                    }

                    // copy the value of j into i

                    for(int k = 0; k < num_s; k++)
                    {
                        if(temp_clas[j][k] == 1)
                        {
                            temp_clas[i][k] = temp_clas[j][k];
                            temp_clas[j][k] = -1;
                        }
                    }

                    float se = mse(temp_clas, num_s);

                    if(min_se > se)
                    {
                        min_se = se;
                        cluster[0] = i;
                        cluster[1] = j;
                    }

                }
            }
        }

        // merge two class
        for(int i = 0; i < num_s; i++)
        {
            if(clas[cluster[1]][i] == 1)
            {
                clas[cluster[0]][i] = 1;
                clas[cluster[1]][i] = -1;
            }
        }

        // print the result
        cout << endl << endl;

        for(int i = 0; i < num_s; i++)
        {
            if(clas[i][i] != -1)
            {
                cout << "{";
                for(int j = 0; j < num_s; j++)
                {
                    if(clas[i][j] != -1)
                        cout << (j+1) << ", ";
                }
                cout << "\b\b}, ";
            }
        }


    }

    return 0;
}
