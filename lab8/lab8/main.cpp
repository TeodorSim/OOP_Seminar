#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm> //transform
#include <map>
#include <queue>
using namespace std;
ifstream in("input.txt");

class compare
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }
};

inline bool isDelim(char c) {
    const string delim = " ,.'?!";
        for(int i = 0;i < delim.size(); ++i)
            if (delim[i] == c)
                return true;
    return false;
}
int main()
{
	string line;
    getline(in, line);
    vector<string> vectorLine;
    string delim = " .!?,";

    transform(line.begin(), line.end(), line.begin(), tolower); //all characters are in low form

    int l = 0;
    for (int i = 0;i < line.length(); i++) {
        char c = line[i];
        if (isDelim(c)) {
            string sub = line.substr(l, i - l);
            l = i + 1; //tine cont de unde reincepe un nou cuvant
            if (sub.length() > 0)
                vectorLine.push_back(sub);
        }
    }

    /*
    * test the vector
    for (int i = 0;i < vectorLine.size(); i++)
        cout << vectorLine[i] << endl;
    */
    vector<string> vector2Line;

    map <string, int> cuvinte;
    for (auto i: vectorLine) {
        /*
        if (cuvinte[vectorLine[i]] > 1)
            vectorLine.erase(vectorLine.begin()+(i-1)); //elemenutl i 
            */
        if (cuvinte[i] == 0)
            vector2Line.push_back(i);

        cuvinte[i]++;
    }

    /*
    for (auto i:vector2Line) {
        cout << i << ' '<<cuvinte[i] << endl;
    }
    */

    //vectorLine.erase(vectorLine.begin(), vectorLine.end());
    vectorLine = vector2Line; //reuse vectors

    vector<pair<string, int>> vectorPair;
    for (auto i : vectorLine)
        vectorPair.push_back(make_pair(i, cuvinte[i]));

    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> priority;
    //se face PQ-ul
    for (auto i : vectorPair)
        priority.push(i);

    while (!priority.empty()) {
        cout << priority.top().first << " => " << priority.top().second << endl;
        priority.pop();
    }
 
    return 0;
} 