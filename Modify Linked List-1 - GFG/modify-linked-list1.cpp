//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
     vector<int>copy;
        struct Node*p=head;
        while(head!=NULL)
        {
            copy.push_back(head->data);
            head=head->next;
        }
        int n=copy.size();
        for(int i=0;i<n/2;i++)
        {
            int temp=copy[i];
            copy[i]=copy[n-i-1]-copy[i];
            copy[n-i-1]=temp;
        }
        head=p;
        int i=0;
        while(head!=NULL)
        {
            head->data=copy[i];
            i++;
            head=head->next;
        }
        return p;   //add code here.
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends