class Solution {
public:
    string pushDominoes(string dominoes) {
 int n = dominoes.size();
        queue<pair<int, char>> q; // index, current state
        vector<int> visited(n, 0);
        // push the initial state into queue and mark the visited cell
        for(int i=0; i < n; i++){
            if(dominoes[i] == '.')
                continue;
            q.push({i, dominoes[i]});
            visited[i] = 1;
        }
        // start BFS to simulate each round
        while(!q.empty()){
            int q_size = q.size();
            unordered_map<int, vector<char>> index_state_map;
            // iterate current round of states
            for(int i=0; i < q_size; i++){
                auto [cur_index, cur_state] = q.front();
                q.pop();
                // extend one more step
                if(cur_state == 'L'){
                    // check the left domino
                    int new_index = cur_index - 1;
                    if(new_index >= 0 && !visited[new_index]){
                        index_state_map[new_index].push_back(cur_state);
                    }
                }
                else if(cur_state == 'R'){
                    // check the right domino
                    int new_index = cur_index + 1;
                    if(new_index < n && !visited[new_index]){
                        index_state_map[new_index].push_back(cur_state);
                    }                                   
                }
            }
            // update the state after finishing this round
            for(auto [new_index, new_states] : index_state_map){
                int state = 0;
                for(auto new_state : new_states){
                    if(new_state == 'L'){
                        state--;
                    }
                    else if(new_state == 'R'){
                        state++;
                    }
                }
                
                if(state < 0){
                    q.push({new_index, 'L'});
                    //update the domino state
                    dominoes[new_index] = 'L';
                }
                else if(state > 0){
                    q.push({new_index, 'R'});
                    dominoes[new_index] = 'R';
                }
                else{
                    dominoes[new_index] = '.';
                }
                visited[new_index] = 1;
            }        
        }
        
        return dominoes;   
    }
};