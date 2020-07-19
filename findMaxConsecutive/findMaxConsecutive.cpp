#include <vector>
#include <minmax.h>
   
   
   
   
int findMaxConsecutiveOnes(std::vector<int>& nums) {
			int best = 0,temp; bool flag;
			for(int i=0;i<nums.size();){
				if(nums[i]){
					flag = true;
                    temp=1;
					for(int j=i+1;j<nums.size();j++){
						if(!nums[j]){ i=j; flag = false; break;}
						temp++;
					}
					best = std::max(best,temp);
					//if(flag){i=INT_MAX;}
				}
				else i++;
			}
			return best;
}



int main(){
   std::vector<int> input{ 1,1,0,1,1,1};



    return 0;
}