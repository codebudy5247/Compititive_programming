#include <iostream>
using namespace std;

int knapsack(int a[][2],int m,int n,int p){
    int k[n+1][m+1];
    int z[n+1][m+1];
    /*for(int i=0;i<m+1;i++){
        k[0][i]=0;
        z[0][i]=0;
    }*/
    for(int i=0;i<n+1;i++){
        for(int w=0;w<m+1;w++){
            //cout<<i<<" "<<w<<endl;
            if(i==0 or w==0){
                k[i][w] = 0;
                z[i][w] = 0;
            }
            else if(a[i-1][0]<=w){
                int p1,p2;
                p1 = a[i-1][1]+k[i-1][w-a[i-1][0]];
                p2 = k[i-1][w];
                if(p1>p2){
                    z[i][w] = z[i-1][w-a[i-1][0]]+a[i-1][0];
                    k[i][w] = p1;
                }else{
                    z[i][w] = z[i-1][w];
                    k[i][w] = p2;
                }
            }else{
                z[i][w] = z[i-1][w];
                k[i][w] = k[i-1][w];
            }

        }/*
        for(int x=0;x<m+1;x++){
            int temp1=z[0][x];
            int temp2=k[0][x];
            z[0][x] = z[1][x];
            k[0][x] = k[1][x];
            z[1][x] = temp1;
            z[1][x] = temp2;
        }
        for(int i=1;i<n+1;i++){
            for(int w=1;w<m+1;w++){
                cout<<k[i][w]<<" ";
            }
            cout<<endl;
        }
        cout<<"-----------------------------"<<endl;
    */
    }
    if(k[n][m]>=p){
        //cout<<k[n][m]<<endl;
        return z[n][m];
    }else{
        return -1;
    }
}
int main() {
	//code
	int t,m,p,n,i,res;
	cin>>t;
	while(t--){
	    cin>>n>>m>>p;
	    int a[n][2];
	    for(i=0;i<n;i++){
	        cin>>a[i][0]>>a[i][1];
	    }

	    res = knapsack(a,m,n,p);
	    if(res!=-1){
	        cout<<"YES "<<res;
	    }else{
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}
