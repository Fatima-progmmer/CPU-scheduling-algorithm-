#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int bt[20],wt[20],tat[20],n;
	float wtavg,tatavg;
	cout << "Enter  the number of processes:";
	cin >> n;
	cout << endl;
	for(int i=0;i<n;i++)
	{
		
		cout << "Enter Burst time for process " << i <<":";
		cin >> bt[i];
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(int i=0;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	cout << "\n\tProcess\tBurst Time\tWaiting time\tTurn around time"<< endl;
	for(int i=0;i<n;i++)
	cout << "\n\tP" << i <<"\t" << bt[i] <<"\t\t" <<wt[i] <<"\t" <<tat[i];
	cout << "\n\nAverage waiting time =" << wtavg/n << endl;
	cout << "Average Turnaround Time =" << tatavg/n << endl;
	return 0;
}

