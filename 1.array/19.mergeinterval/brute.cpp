// 2 boundary condition:1,9 ->6,8 the 6,8 is between 1,9 inside it
//1,3->2,4the boundary condition is just next to it
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  vector < vector < int >>ques = { {6,8}, {1,9}, {2,4}, {4,7} };
  //use sort as it can be 6,8 and 1,9 
  sort(ques.first(),ques.end());

  int n = ques.size ();		//4
  int currs, curre;
  for (int i = 0; i < n; i++)
    {
      currs = ques[i][0];
      curre = ques[i][1];
      for (int j = 0; j < n; j++)
	{
	  if (i == j)
	    continue;
	  if (currs <= ques[j][0] && curre >= ques[j][1])	//1,9 and 6,8
	    {
	      currs = min (currs, ques[j][0]);
	      curre = max (curre, ques[j][1]);
	      ques[j][0] = INT_MAX;
	      ques[j][1] = INT_MAX;
	    }
	  else if (currs <= ques[j][0] && curre <= ques[j][1] && curre >= ques[j][0])	//1,3 and 2,4 but it can also be 1,3 and 4,6
	    {
	      currs = min (currs, ques[j][0]);
	      curre = max (curre, ques[j][1]);
	      ques[j][0] = INT_MAX;
	      ques[j][1] = INT_MAX;
	    }
	}
	  ques[i][0] = currs;
	  ques[i][1] = curre;


    }
    
    
    
      vector < vector < int >>ans;
      for (int i = 0; i < n; i++)
	{
	  if (ques[i][0] < INT_MAX)
	    {
	    cout << ques[i][0] << " " <<ques[i][1]<<endl;
	        
	    }
	}



  return 0;
}
