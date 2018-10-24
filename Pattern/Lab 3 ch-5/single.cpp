
//Complete Linkage
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_s, s_i, s_j;
    float min_v = 10000.0f;
    cout << "Enter number of samples:" << endl;
    cin >> num_s;

    float sample[num_s][2], dist[num_s][num_s];
    int clas[num_s][num_s];

    cout << "Enter the features of each sample:" << endl;

    for(int i = 0; i < num_s; i++)
    {
        cin >> sample[i][0]; /// for x value
        cin >> sample[i][1]; /// for y value

        for(int j = 0; j < num_s; j++)
        {
            dist[i][j] = 10000.0f;

            if(i == j)
                clas[i][j] = i;
            else
                clas[i][j] = -1;
        }
    }

    // calculate the distance

    for(int i = 0; i < num_s; i++)
    {
        for(int j = i+1; j < num_s; j++)
        {
            ///Find distance
            dist[i][j] = sqrt(pow((sample[i][0]- sample[j][0]), 2) + pow((sample[i][1]- sample[j][1]), 2));
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

    cout << endl << endl;

    cout << endl << "Cluster array:";
    for(int i = 0; i < num_s; i++)
    {
        cout  << endl;
        for(int j = 0; j < num_s; j++)
        {
            cout << (clas[i][j]+1) << " ";
        }
    }

    cout << endl << "Distance array:";
    for(int i = 0; i < num_s; i++)
    {
        cout  << endl;
        for(int j = 0; j < num_s; j++)
        {
            cout << (dist[i][j]) << " ";
        }
    }



    for(int k = 0; k < num_s-1; k++)
    {
        // find the minimum distance
        min_v = 10000.0f;
        for(int i = 0; i < num_s; i++)
        {
            for(int j = i+1; j < num_s; j++)
            {
                if(min_v > dist[i][j])
                {
                    s_i = i;
                    s_j = j;
                    min_v = dist[i][j];
                }
            }
        }
        dist[s_i][s_j] = 10000.0f;

        cout<<"\n\nsmallest index : "<<s_i<<"  "<<s_j<<endl;
        // clustering
        for(int i = s_j; i < num_s; i++)
        {
            // clustering
            if(clas[s_j][i] != -1)
            {
                clas[s_i][i] = i;
                clas[s_j][i] = -1;
            }

            // update distance
            if(dist[s_i][i] > dist[s_j][i])
            {
                dist[s_i][i] = dist[s_j][i];
            }
            dist[s_j][i] = 10000.0f;
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

        cout << endl << endl;

        cout << endl << "Cluster array:";
        for(int i = 0; i < num_s; i++)
        {
            cout  << endl;
            for(int j = 0; j < num_s; j++)
            {
                cout << (clas[i][j]+1) << " ";
            }
        }

        cout << endl << "Distance array:";
        for(int i = 0; i < num_s; i++)
        {
            cout  << endl;
            for(int j = 0; j < num_s; j++)
            {
                cout << (dist[i][j]) << " ";
            }
        }

    }

    return 0;
}
