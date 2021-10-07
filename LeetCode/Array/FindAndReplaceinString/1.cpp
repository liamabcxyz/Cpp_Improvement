class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        string res=s;
        int bias=0;
        
        for(int i=0;i<sources.size();i++)
        {
            // i love  you

            bool change=true;
            for(int j=0;j<sources[i].size();j++)
            {
                if(s[indices[i]+j]!=sources[i][j])
                {
                    change=false;
                    break;
                }
            }
            

            if(change)
            {
                if(sources[i].size()==targets[i].size())
                {
                    cout<<"1"<<endl;
                    for(int j=0;j<sources[i].size();j++)
                    {
                        res[indices[i]+j+bias]=targets[i][j];
                    }
                }
                else if(sources[i].size()>targets[i].size())
                {
                    cout<<"2"<<endl;
                    for(int j=0;j<targets[i].size();j++)
                    {
                        res[indices[i]+j+bias]=targets[i][j];
                    }     
                    
                    auto pos=res.begin()+indices[i]+targets[i].size()+bias;
                    for(int j=0;j<targets[i].size()-sources[i].size()+1;j++)
                    {
                        res.erase(pos);
                    }
                    bias=bias-(sources[i].size()-targets[i].size());
                }                
                else
                {
                    cout<<"3"<<endl;
                    for(int j=0;j<sources[i].size();j++)
                    {
                        cout<<"bingo"<<endl;
                        cout<<targets[i][j]<<endl;
                        cout<<"res length:"<<res.length()<<endl;
                        cout<<indices[i]+j+bias<<endl;
                        res[indices[i]+j+bias]=targets[i][j];
                        cout<<"--"<<endl;
                    }     

                    for(int j=sources[i].size();j<targets[i].size();j++)
                    {
                        cout<<"bingo"<<endl;
                        res.insert(res.begin()+indices[i]+j+bias,targets[i][j]);
                    }
                    bias=bias+(targets[i].size()-sources[i].size());

                }
            }
            cout<<"bias: "<<bias<<endl;
            cout<<"res: "<<res<<endl;

        }
        
        return res;
    }
};
