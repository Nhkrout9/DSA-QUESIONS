class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(count==n)
            {
                return true;
            }
        for(int i=0;i<flowerbed.size();i++)
        {  //to see if current value is 0 or not 
            if(flowerbed[i]==0)
            { cout<<"Hello";
                if(i==0)
              { //to handle array size of 1
                if(flowerbed.size()==1)
                 {
                    count=count+1;

                 }
                  //to handle corner case 
                else if(flowerbed[i+1]==0 and flowerbed.size()>1)
                 {
                    count=count+1;
                    flowerbed[i]=1;
                 }
                 

              }
              else if(i==flowerbed.size()-1)
              {
                if(flowerbed[i-1]==0)
                {
                    count=count+1;
                    flowerbed[i]=1;
                }
              }
                //to handle middle value 
              else if(flowerbed.size()>3 && flowerbed[i-1]==0 && flowerbed[i+1]==0 )
              { 
                count=count+1;
                flowerbed[i]=1;

              }

            }
            cout<<count;
            if(count==n)
            {
                return true;
            }
        }
        return false;
    }
};
