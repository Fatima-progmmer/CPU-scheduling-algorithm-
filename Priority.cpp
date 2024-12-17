#include<iostream>
using namespace std;
int main()
{
	int p[20],bt[20],pri[20], wt[20],tat[20],i, k, n, temp; 
    float wtavg, tatavg; 
    cout << "Enter the number of processes --- " ; 
    cin >> n;
    cout << endl;
    for(i=0;i<n;i++)
	{
	 p[i] = i;
	 cout << "Enter the Burst Time " << i << " :";
	 cin >> bt[i];
	  cout << "Priority of Process " << i << " :";
	  cin >> pri[i];
}
for(i=0;i<n;i++)
for(k=i+1;k<n;k++) 
if(pri[i] > pri[k])
{
temp=p[i]; 
p[i]=p[k]; 
p[k]=temp;
temp=bt[i]; 
bt[i]=bt[k];
bt[k]=temp;
temp=pri[i];
pri[i]=pri[k]; 
pri[k]=temp;
}
wtavg = wt[0] = 0; 
tatavg = tat[0] = bt[0];
for(i=1;i<n;i++)
{
wt[i] = wt[i-1] + bt[i-1];
tat[i] = tat[i-1] + bt[i];
wtavg = wtavg + wt[i]; 
tatavg = tatavg + tat[i];
}
cout << "\n\tPROCESS\t\tPRIORITY\tBURST TIME\tWAITING TIME\tTURNAROUND TIME";
for(i=0;i<n;i++)
cout << "\n\tP"<< i+1<< "\t" <<p[i] << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" <<tat[i];
cout << "\n\nAverage Waiting Time is --- " << wtavg/n;
cout << "\nAverage Turnaround Time is ---"  << tatavg/n;
	return 0;
}

