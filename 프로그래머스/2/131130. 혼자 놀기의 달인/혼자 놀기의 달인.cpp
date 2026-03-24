#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cards) {
    vector<int> Order;
    for(size_t i= 0;i<cards.size();i++)
    {
        int num = i;
        int size = 0;
        while(cards[num] != -1)
        {
            size++;
            int temp = num;
            num = cards[num] -1;
            cards[temp] = -1;
            
            
        }
        
        Order.push_back(size);
    }
    
    sort(Order.begin(),Order.end(),greater<>());
    
    int answer = Order[0]* Order[1];
    return answer;
}