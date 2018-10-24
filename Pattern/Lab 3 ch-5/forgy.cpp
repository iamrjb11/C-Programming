//Forgy's Method
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int num_s, k;
    cout << "Enter number of samples and class:" << endl;
    cin >> num_s >> k;

    float sample[num_s][2], centroid[k][2];
    int clas[k][num_s], temp_clas[k][num_s];

    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < num_s; j++)
        {
            clas[i][j] = 0;
            temp_clas[i][j] = 0;
        }
    }

    cout << "Enter the features of each sample:" << endl;

    for(int i = 0; i < num_s; i++)
    {
        cin >> sample[i][0];
        cin >> sample[i][1];

        if(k > i)
        {
            centroid[i][0] = sample[i][0];
            centroid[i][1] = sample[i][1];
        }
    }

    cout << "centroid:" << endl;
    for(int i = 0; i < k; i++)
    {
        cout << "(" << centroid[i][0] << " , " << centroid[i][1] << ")" << endl;
    }

    while(1)
    {
        // clustering
        for(int i = 0; i < num_s; i++)
        {
            float min_v = INT_MAX;
            int si = -1;
            for(int j = 0; j < k; j++)
            {
                float dist = sqrt(pow((sample[i][0]- centroid[j][0]), 2) + pow((sample[i][1]- centroid[j][1]), 2));
                cout << "\t" << dist;

                if(min_v > dist)
                {
                    min_v = dist;
                    si = j;
                }
            }
            cout << endl;
            clas[si][i] = 1;
        }

        //  check for repeated result
        bool f = true;
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < num_s; j++)
            {
                if(clas[i][j] != temp_clas[i][j])
                    f = false;
            }
        }
        if(f)
            break;

        // if not repeat then copied the result in temp
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < num_s; j++)
            {
                temp_clas[i][j] = clas[i][j];
                clas[i][j] = 0;
            }
        }

        // print the result
        cout << endl << endl << "Class:" << endl;

        for(int i = 0; i < k; i++)
        {
            cout << "{";
            for(int j = 0; j < num_s; j++)
            {
                if(temp_clas[i][j] == 1)
                    cout << (j+1) << ", ";
            }
            cout << "\b\b}, ";
        }

        cout << endl << endl;

        // update the centroid
        for(int i = 0; i < k; i++)
        {
            int c = 0;
            centroid[i][0] = 0.0f;
            centroid[i][1] = 0.0f;
            for(int j = 0; j < num_s; j++)
            {
                if(temp_clas[i][j] == 1)
                {
                    c++;
                    centroid[i][0] += sample[j][0];
                    centroid[i][1] += sample[j][1];
                }
            }
            centroid[i][0] /= (float)c;
            centroid[i][1] /= (float)c;
        }

        cout << "centroid:" << endl;
        for(int i = 0; i < k; i++)
        {
            cout << "(" << centroid[i][0] << " , " << centroid[i][1] << ")" << endl;
        }



    }

    // print the result
    cout << endl << endl << "Class:" << endl;

    for(int i = 0; i < k; i++)
    {
        cout << "{";
        for(int j = 0; j < num_s; j++)
        {
            if(clas[i][j] == 1)
                cout << (j+1) << ", ";
        }
        cout << "\b\b}, ";
    }

    cout << endl << endl;

    return 0;
}
