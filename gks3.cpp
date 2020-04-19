#include<iostream>
#include<stack>


using namespace std;

int main() {
    int t,i,j,temp;
    string re,r;
    int rows[101]={}, col[101]={};
    stack<char> stk;

    stack<int> row, column;
    cin>>t;
    	for(i=0; i<t; i++){
		
		cin>>re;
		r='('+re+')';
    		//cout<<r.length();
		for(j=0; j<r.length(); j++){
			if(r[j]=='('){
				row.push(0);
				column.push(0);
				stk.push('(');
			}
			if(r[j]==')'){
				while(stk.top()!='('){
					cout<<"stk top"<<stk.top()<<"\nrow top"<<row.top()<<"\ncol top"<<column.top()<<"\n";
					if(stk.top()=='E'){
						//column[i]++;
						temp=column.top();
						temp++;
						column.pop();
						column.push(temp);
					}
					else if (stk.top()=='S'){
						//row[i]++;
						
						temp=row.top();
						temp++;
						row.pop();
						row.push(temp);
					}
					else if (stk.top()=='N'){
						//row[i]--;
						temp=row.top();
						temp--;
						row.pop();
						row.push(temp);
					}
					else if (stk.top()=='W'){
						//column[i]--;
						temp=column.top();
						temp--;
						column.pop();
						column.push(temp);
					}
					/*else {
						//row[i]*=stk.top()-'0';
						temp=row.top();
						temp*=stk.top()-'0';
						row.pop();
						row.push(temp);
						//column[i]*=stk.top()-'0';
						temp=column.top();
						temp*=stk.top()-'0';
						column.pop();
						column.push(temp);
					}*/
					stk.pop();
				}
				stk.pop();
					//row[i]*=stk.top()-'0';
						temp=row.top();
						temp*=stk.top()-'0';
						row.pop();
						row.push(temp);
						//column[i]*=stk.top()-'0';
						temp=column.top();
						temp*=stk.top()-'0';
						column.pop();
					column.push(temp);

				//rows[i]+=row.top();
				temp=row.top();
				row.pop();
				temp+=row.top();
				row.pop();
				row.push(temp);
				//col[i]+=column.top();
				temp=column.top();
				column.pop();
				temp+=column.top();
				column.pop();
				column.push(temp);
			}	
			else {
				stk.push(r[j]);		
			}	
			rows[i]=row.top();
			row.pop();
			col[i]=column.top();
			column.pop();
			cout<<"---------------------";
		}

	}
      for (int i=0; i<t;i++){
          if(rows[i]<0)
		rows[i]+=1000000000;
	  if(col[i]<0)
		col[i]+=1000000000;
      }   	 
      for (int i=0; i<t;i++){
          cout<<"Case #"<<i+1<<": "<<col[i]+1<<" "<<rows[i]+1<<"\n";
      }   	 
	return 0;
}
