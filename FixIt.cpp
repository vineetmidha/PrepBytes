// https://mycode.prepbytes.com/contest/PRIMETIMEFEB21/problems/FIXIT

int main()
{
  int t;
  cin >> t;
  
  while (t--){
    string s;
    cin >> s;
    
    int u = count(s.begin(), s.end(), 'U');

    int size = s.size();
    
    
    cout << abs(size/2 - u) << endl;
  }
  return 0;
}

