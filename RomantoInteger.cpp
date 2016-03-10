class Solution {
public:
int romanToInt(string s) {
        vector<char>scan;
        for(char& c :s)
        {
            scan.push_back(c);
        }
        int left = 0;
        int current = 0;
        int result = 0;
        int countSame = 1;
        for(int i = 0; i < scan.size(); i++)
        {
            switch(scan[i])
            {
                case 'I':
                    current = 1;
                    break;
                case 'V':
                    current = 5;
                    break;
                case 'X':
                    current = 10;
                    break;
                case 'L':
                    current = 50;
                    break;
                case 'C':
                    current = 100;
                    break;
                case 'D':
                    current = 500;
                    break;
                case 'M':
                    current = 1000;
                    break;
                default:
                    break;
            }
              if(countSame != 1)
              {
                  result = (left * countSame) + result;
                  countSame = 1;
              }
              if(left < current)
              {
                  result = result + current - 2*left;
              }
              else
              {
                  result = result + current;
              }

          left = current;

        }
        return result;
    }

};
