#include <iostream>
using namespace std;

int main() {
    int n,time,score,max=-1,arr[102][2],total,mistake=0,timing=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>time>>score;
        arr[i][0]=time;
        arr[i][1]=score;
        if (score > max) {
            max=score;
            timing=arr[i][0];
        }
        if (score==-1) {
            mistake++;
        }
    }
    total=max-n-mistake*2;
    if (total<0) {
        total=0;
    }
    cout<<total<<" "<<timing;
}
