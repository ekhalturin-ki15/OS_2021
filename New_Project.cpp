#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void my_swap(int& left, int& right)
{
    // ++i; i = i +1;
    // i += 1;

    left ^= right ^= left ^= right;
}

void cin_vector(vector<int>& eng)
{
    int n;
    cin >> n;
    eng.resize(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> eng[i];
    }
}

void cout_vector(const vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << "";
    cout << "\n";
}



void function(int i, vector<int>& v)
{
    v[i] = i;

    if (i < v.size())
    {
        function(i + 1, v);
    }

}

int mod_double(double d, const int mod)
{
    return (int(d) % mod);
}


string result(int& l, int r, const double& c)
{
    double tmp = double(l * r) + c;

    if (mod_double(tmp, 3) == 0)
        return "*\t";
    else
        return to_string(tmp) + "\t";

}

bool intersect(int a, int b)
{

    std::string sa = to_string(atoi("52925454"));//std::to_string(a);
    std::string sb = to_string(atoi("292"));//std::to_string(b);


    if (sa.size() < sb.size()) swap(sa, sb);


    for (int x = 0; x < sa.size(); ++x)
    {
        bool flag = true;
        for (int y = 0; y < sb.size(); ++y)
        {
            if (sa[x + y] != sb[y])
            {
                flag = false;
                break;

            }


        }
        if (flag) return true;

    }



    return false;
}

void rect(vector<int>& v, const int& step, const int& sys_s, const int& n)
{
    if (step == n)
    {
        cout_vector(v);
        //rect()
        return;
    }

    for (int i = 0; i < sys_s; ++i)// 0 1 2 3 4
    {

        v[step] = i;
        rect(v, step + 1, sys_s, n);
    }

    return;
}



int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);

    rect(v, 0, c, n);


}