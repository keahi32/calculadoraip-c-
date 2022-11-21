//Inicio codigo Jesus
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;


//Funciones y vectores principales

int Octetos(string ip, vector<int> &octetos);
vector<int> mascaraRed(vector<int> &ip, vector<int> &mascara);
string binario(vector<int>);
string normal(vector<int>);

// Convertir de texto a vector integral
int Octetos(string ip, vector<int> &octetos)
{
    stringstream ss(ip);
    string temp;

    while (getline(ss,temp,'.'))
        octetos.push_back(atoi(temp.c_str()));

    return 0;
}

// Combinar ip con mascara de red
vector<int> mascaraRed(vector<int> &ip, vector<int> &mascara)
{
    vector<int> salida;

    for (unsigned i=0; i<ip.size(); i++)
        salida.push_back(ip[i] & mascara[i]);

    return salida;
}

// Conversion de texto a binario "00000000.00000000.00000000.00000000"
string binario(vector<int> octetos)
{
    string result;
    
    for (unsigned j=0; j < octetos.size(); j++)
    {
        if (j>0)
            result += '.';

        int mascara = 256;
        while (mascara>>=1)
            result += '0' + ((octetos[j] & mascara ) != 0);
    }

    return result;
}

// Conversion de decimal a texto "192.168.1.1"
string normal(vector<int> octetos)
{
    ostringstream outs;

    for (unsigned j=0; j < octetos.size(); j++)
    {
        if (j>0)
            outs << '.';
        outs << octetos[j];
    }
    return outs.str();
}

//Inicio del programa
int main()
{
    string ip;
    cout<<"Escribe la ip porfavor"<<endl;
    cin>>ip;
    string mascara;
    cout<<"Escribe la mascara de red"<<endl;
    cin>>mascara;
    int host;
    // Inicio codigo Alvaro Carillo
     if(mascara == "255.255.255.255"){
        cout<<"Hay 0 host"<<endl;
        host= 0;
    }else if(mascara == "255.255.255.254"){
        cout<<"Hay 0 host"<<endl;
        host= 0;
    }else if(mascara == "255.255.255.252"){
        cout<<"Hay 2 host"<<endl;
        host= 2;
    }else if(mascara == "255.255.255.248"){
        cout<<"Hay 6 host"<<endl;
        host= 6;
    }else if(mascara == "255.255.255.240"){
        cout<<"Hay 14 host"<<endl;
        host= 14;
    }else if(mascara == "255.255.255.224"){
        cout<<"Hay 30 host"<<endl;
        host= 30;
    }else if(mascara == "255.255.255.192"){
        cout<<"Hay 62 host"<<endl;
        host= 62;
    }else if(mascara == "255.255.255.128"){
        cout<<"Hay 126 host"<<endl;
        host= 126;
    }else if(mascara == "255.255.255.0"){
        cout<<"Hay 254 host"<<endl;
        host= 254;
    }else if(mascara == "255.255.254.0"){
        cout<<"Hay 510 host"<<endl;
        host= 510;
    }else if(mascara == "255.255.252.0"){
        cout<<"Hay 1022 host"<<endl;
        host= 1022;
    }else if(mascara == "255.255.248.0"){
        cout<<"Hay 2046 host"<<endl;
        host= 2046;
    }else if(mascara == "255.255.240.0"){
        cout<<"Hay 4094 host"<<endl;
        host= 4094;
    }else if(mascara == "255.255.224.0"){
        cout<<"Hay 8190 host"<<endl;
        host= 8190;
    }else if(mascara == "255.255.192.0"){
        cout<<"Hay 16382 host"<<endl;
        host= 16382;
    }else if(mascara == "255.255.128.0"){
        cout<<"Hay 32766 host"<<endl;
        host= 32766;
    }else if(mascara == "255.255.0.0"){
        cout<<"Hay 65534 host"<<endl;
        host= 65534;
    }else if(mascara == "255.255.0.0"){
        cout<<"Hay 65534 host"<<endl;
        host= 65534;
    }else if(mascara == "255.254.0.0"){
        cout<<"Hay 131070 host"<<endl;
        host= 131070;    
    }else if(mascara == "255.252.0.0"){
        cout<<"Hay 262142 host"<<endl;
        host= 262142;
    }else if(mascara == "255.248.0.0"){
        cout<<"Hay 524286 host"<<endl;
        host= 524286;
    }else if(mascara == "255.240.0.0"){
        cout<<"Hay 1048574 host"<<endl;
        host= 1048574;
    }else if(mascara == "255.224.0.0"){
        cout<<"Hay 2097150 host"<<endl;
        host= 2097150;
    }else if(mascara == "255.192.0.0"){
        cout<<"Hay 4194302 host"<<endl;
        host= 4194302;
    }else if(mascara == "255.128.0.0"){
        cout<<"Hay 8388606 host"<<endl;
        host= 8388606;
    }else if(mascara == "255.0.0.0"){
        cout<<"Hay 16777214 host"<<endl;
        host= 16777214;
    }else if(mascara == "254.0.0.0"){
        cout<<"Hay 33554430 host"<<endl;
        host= 33554430;
    }else if(mascara == "252.0.0.0"){
        cout<<"Hay 67108862 host"<<endl;
        host= 131070;
    }else if(mascara == "248.0.0.0"){
        cout<<"Hay 134217726 host"<<endl;
        host= 134217726;
    }else if(mascara == "240.0.0.0"){
        cout<<"Hay 268435454 host"<<endl;
        host= 268435454;
    }else if(mascara == "224.0.0.0"){
        cout<<"Hay 536870910 host"<<endl;
        host= 536870910;
    }else if(mascara == "192.0.0.0"){
        cout<<"Hay 1073741822 host"<<endl;
        host= 1073741822;
    }else if(mascara == "128.0.0.0"){
        cout<<"Hay 2147483646 host"<<endl;
        host= 2147483646;
    }else if(mascara == "0.0.0.0"){
        cout<<"Hay 4294967294 host"<<endl;
        host= 4294967294;}
        // FIn codigo Alvaro Carillo
    vector<int> octetosIp;
    vector<int> octetosMascara;
    vector<int> octetosResultado;

    Octetos(ip, octetosIp);
    Octetos(mascara, octetosMascara);
    octetosResultado = mascaraRed(octetosIp, octetosMascara);

    //Parte Antonio Iengo
    if(octetosIp[0] <= 127){
        cout<<"Es clase A"<<endl;
    }else if(octetosIp[0] <= 128 || octetosIp[0] <=191){
        cout<<"Es clase B"<<endl;
    }else{
        cout<<"Es clase C"<<endl;
    }
    // Fin Parte Antonio Iengo
    
    cout<<"IP: "<< binario(octetosIp)<<endl;
    cout<<"Mascara de Red: "<< binario(octetosMascara)<<endl;
    cout<<"Resultado: "<<binario(octetosResultado)<<endl;
    
    

    return 0;
}
//Fin codigo Jesus
