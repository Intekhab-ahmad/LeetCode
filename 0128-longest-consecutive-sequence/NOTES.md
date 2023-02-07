map<int,int> :: iterator i1;
map<int,int>::iterator i2;
for(i1=mp.begin();i1!=mp.end();++i1){
i2 = std::next(i1, 1);
cout<<i2->first<<endl;
}