#include <iostream>
using namespace std;

int main()
{
    char str_ip[256];
    int octeto[] = {0,0,0,0}, decimal[] = {1,10,100};
    int i = 0, j = 0, num_octecto = 0;
    
    cout << "Ingrese el numero de ip:" << endl;
    cin >> str_ip;
    
    while(str_ip[i] != 0){
        i++;
        if(str_ip[i] == 46 || str_ip[i+1] == 0){
            if(str_ip[i-2] == 46)
                octeto[num_octecto] += (str_ip[i-1] - 48);
            else
                for(j=0;j<=2;j++) octeto[num_octecto] += decimal[j] * (str_ip[i-(j+1)] - 48);
            num_octecto++;
        }
    }
    cout << i << endl;
    cout << octeto[0] << " "<<octeto[1] << " " << octeto[2] <<endl;
    return 0;
}


