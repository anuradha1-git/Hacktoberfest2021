//When only traversal is required this method could be useful
void preTopost(int arr[],int start,int end)
{
    if(start>end)
        return;
    int mid = start+1;
    while(mid<=end and arr[mid]<arr[start])
        mid++;
    mid--;
    preTopost(arr,start+1,mid);
    preTopost(arr,mid+1,end);
    cout<<arr[start]<<" ";
}
//When we have to construct the whole tree using pre-order array this method is quite useful.
Node* construct(int* arr,int &i,int n,int min,int max){
    if(i>=n || min>max || arr[i]<min || arr[i]>max)
        return NULL;
    Node* root = newNode(arr[i]);
    i++;int temp = arr[i-1];
    root->left = construct(arr,i,n,min,temp);
    root->right = construct(arr,i,n,temp,max);
    return root;
}
Node* constructTree(int pre[], int n)
{
    //When you only wants to print the solution 
    preTopost(pre,0,n-1);
    return NULL;
    
    //When you are asked to make the whole damn tree
    int i=0, min = INT_MIN, max = INT_MAX;
    return construct(pre,i,n,min,max);
}
