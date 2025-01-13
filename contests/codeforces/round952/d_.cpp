#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int t, n, m, counter=0;
    tuple<int, int> north, south;
    char c;
    bool isEnd = false;

    for(cin>>t; t>0; t--){
        cin >> n >> m;

        int matrix[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> c;
                matrix[i][j] = c;

                if(c == '#' && counter == 0){
                    north = make_tuple(i, j);
                    counter++;
                }
            }
        }

        if(get<0>(north)+1 == n || matrix[get<0>(north)+1][get<1>(north)] != '#')
            cout << get<0>(north)+1 << " " << get<1>(north)+1 << "\n";
        else{
            for(int i=get<0>(north); i<n; i++){
                if(i+1 == n || matrix[i+1][get<1>(north)] != '#'){
                    south = make_tuple(i, get<1>(north));
                    break;
                }
            }

            cout << ((get<0>(south)+get<0>(north))/2)+1 << " " << get<1>(north)+1 << "\n";
        }

        counter = 0;
        isEnd = false;
    }

    return 0;
}