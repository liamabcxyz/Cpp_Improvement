class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        int m=rooms.size();
        int n=rooms[0].size();
        
        set<pair<int,int>> s;
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(rooms[i][j]==0)
                {
                    q.push(make_pair(i,j));
                    s.insert(make_pair(i,j));
                }
                    
            }
        }
        
        while(!q.empty())
        {
            pair<int,int> pos=q.front();
            q.pop();
            int level=rooms[pos.first][pos.second] + 1;
            
            if(pos.first-1>=0 && rooms[pos.first-1][pos.second]!=-1)
            {
                if(s.find(make_pair(pos.first-1,pos.second))==s.end())
                {
                    cout<<"2"<<endl;
                    s.insert(make_pair(pos.first-1,pos.second));
                    rooms[pos.first-1][pos.second] = (rooms[pos.first-1][pos.second]<level)?rooms[pos.first-1][pos.second]:level;
                    q.push(make_pair(pos.first-1,pos.second));                    
                }

            }
            if(pos.first+1<m && rooms[pos.first+1][pos.second]!=-1)
            {
                if(s.find(make_pair(pos.first+1,pos.second))==s.end())
                {
                    s.insert(make_pair(pos.first+1,pos.second));
                    rooms[pos.first+1][pos.second] = (rooms[pos.first+1][pos.second]<level)?rooms[pos.first+1][pos.second]:level;
                    q.push(make_pair(pos.first+1,pos.second));                    
                }

            }
            if(pos.second-1>=0 && rooms[pos.first][pos.second-1]!=-1)
            {
                if(s.find(make_pair(pos.first,pos.second-1))==s.end())
                {
                    s.insert(make_pair(pos.first,pos.second-1));
                    rooms[pos.first][pos.second-1] = (rooms[pos.first][pos.second-1]<level)?rooms[pos.first][pos.second-1]:level;
                    q.push(make_pair(pos.first,pos.second-1));                    
                }

            }
            if(pos.second+1<n && rooms[pos.first][pos.second+1]!=-1)
            {
                if(s.find(make_pair(pos.first,pos.second+1))==s.end())
                {
                    s.insert(make_pair(pos.first,pos.second+1));
                    rooms[pos.first][pos.second+1] = (rooms[pos.first][pos.second+1]<level)?rooms[pos.first][pos.second+1]:level;
                    q.push(make_pair(pos.first,pos.second+1));                    
                }

            }
        }
    }
};
