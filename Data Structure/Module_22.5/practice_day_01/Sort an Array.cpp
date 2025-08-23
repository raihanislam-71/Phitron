class Solution {
public:
    vector<int> CreatMinHeap(vector<int> nums , int s)
    {
        vector<int> v;
        for (int i = 0; i < s; i++)
        {
            int x = nums[i];
            v.push_back(x);
            int cur_idx = v.size() - 1;
            while (cur_idx != 0)
            {
                int parent_idx = (cur_idx - 1) / 2;
                if (v[parent_idx] > v[cur_idx])
                    swap(v[parent_idx], v[cur_idx]);
                else
                    break;
                cur_idx = parent_idx;
            }
        }
        return v;
    }

    int RootHeap(vector<int> &v)
    {
        int minVal = v[0]; 
        v[0] = v[v.size() - 1];
        v.pop_back();

        int cur = 0;
        while(true)
        {
            int left_idx = cur * 2 + 1;
            int right_idx = cur * 2 + 2;
            int last_idx = v.size() - 1;
            if(left_idx <= last_idx && right_idx <= last_idx)
            {
                if(v[left_idx] <= v[right_idx] && v[left_idx] <= v[cur])
                {
                    int tmp = v[left_idx];
                    v[left_idx] = v[cur];
                    v[cur] = tmp;
                    cur = left_idx;
                }
                else if(v[right_idx] <= v[left_idx] && v[right_idx] <= v[cur])
                {
                    int tmp = v[right_idx];
                    v[right_idx] = v[cur];
                    v[cur] = tmp;
                    cur = right_idx;
                }
                else
                    break;
            }
            else if(left_idx <= last_idx)
            {
                if(v[left_idx] <= v[cur])
                {
                    int tmp = v[left_idx];
                    v[left_idx] = v[cur];
                    v[cur] = tmp;
                    cur = left_idx;
                }
                else
                    break;
            }
            else if(right_idx <= last_idx)
            {
                if(v[right_idx] <= v[cur])
                {
                    int tmp = v[right_idx];
                    v[right_idx] = v[cur];
                    v[cur] = tmp;
                    cur = right_idx;
                }
                else
                    break;
            }
            else 
                break;
            
        }
        return minVal; 
    }
    vector<int> sortArray(vector<int>& nums) {
        
      vector<int> heap = CreatMinHeap(nums , nums.size());

      vector<int> sort;
      while(!heap.empty())
      {
        int val = RootHeap(heap);
        sort.push_back(val);
      }
      return sort;
    }
};