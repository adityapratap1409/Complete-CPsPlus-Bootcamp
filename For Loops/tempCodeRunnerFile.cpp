  int n=10,a=0,b=1;
    cout<<"Fibonacci series"<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextN=a+b;
        cout<<nextN<<" ";
        a=b;
        b=nextN;
    }