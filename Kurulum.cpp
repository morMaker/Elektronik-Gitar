#include<iostream>
#include<Windows.h>
#include<clocale>

using namespace std;

int main(){
    int a= system("xcopy \".\\src\\Elektronik Gitar.lnk\" \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\" /Y > log 2>&1");
    if(a!=0){
        cout<<"Erisim engellendi. Lutfen bu dosyayi yonetici olarak calistiriniz.\n";
        cout<<"Devam etmek icin bir tusa basin...";
        system("del log");
        getchar();
        return 0;
    }
    cout<<"Kurulum basladi. Klasorler olusturuluyor...\n";

// Klasör Oluşturma
    string komut="";
    komut+="cd \"C:\\Program Files\" > log 2>&1 ";
    komut+="&& cd morMaker > log 2>&1";
    a = system(&komut[0]);
    if(a)
        system("cd \"C:\\Program Files\"  && md morMaker > log 2>&1");
    system(&komut[0]);
    system( &(komut+"&& rd /s /q elektronik-gitar > log 2>&1")[0] );
    komut+="&& md elektronik-gitar > log 2>&1";
    system(&komut[0]);

    komut="";
    string dizin="\"C:\\Program Files\\morMaker\\elektronik-gitar";

// Verileri kopyalama
    cout<<"\nDosyalar kopyalaniyor...\n";
    komut+="xcopy /E /I .\\src\\arduino "+dizin+"\\arduino\" > log 2>&1 ";
    komut+="&& xcopy \".\\src\\Elektronik Gitar.exe\" "+dizin+"\" /Y > log 2>&1";
    komut+="&& xcopy .\\src\\app.ico "+dizin+"\" > log 2>&1";
    system(&komut[0]);

// Gerekli izinleri sağlama
    cout<<"\nGerekli izinler saglaniyor...\n";
    komut="cd C:\\Program Files\\morMaker\\elektronik-gitar\\arduino";
    komut+="&& icacls . /grant Users:F > log 2>&1";
    komut+="&& icacls . /grant Users:(OI)(CI)F > log 2>&1";
    system(&komut[0]);
    
// Uygulama oluşturma
    cout<<"\nUygulama olusturuluyor...\n";
    komut="xcopy \".\\src\\Elektronik Gitar.lnk\" \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\" /Y > log 2>&1 ";
    komut+="&& copy \".\\src\\Elektronik Gitar.lnk\" \"C:\\Users\\%username%\\Desktop\" ";
    system(&komut[0]);

// DLL :D
    cout<<"\nSistem taraniyor, lutfen bu ekrani kapatmayin...\n";
    // system("sfc/scannow > log 2>&1");
    dizin="C:\\WINDOWS\\system32";
    cout<<"\nEksik DLL dosyalari araniyor (system32)...\n";

    komut="copy "+ dizin + "\\msvcp140d.dll .\\src\\tmp > log 2>&1" ;
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\32\\msvcp140d.dll C:\\WINDOWS\\system32 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tmsvcp140d.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\ucrtbased.dll .\\src\\tmp > log 2>&1" ;
    a=system(&komut[0]);
    if(a){
        komut="\ncopy .\\src\\dll\\32\\ucrtbased.dll C:\\WINDOWS\\system32 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tucrtbased.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\vcruntime140d.dll .\\src\\tmp > log 2>&1" ;
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\32\\vcruntime140d.dll C:\\WINDOWS\\system32 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tvcruntime140d.dll kopyalandi.\n"; 
    }
    if(system("cd C:\\Windows\\SysWOW64 > log 2>&1"))
        goto finito;

    ///////////////////////////////////////////////////////////////////////////////////

    dizin="C:\\Windows\\SysWOW64";
    cout<<"\nEksik DLL dosyalari araniyor (SysWOW64)...\n";

    komut="copy "+ dizin + "\\msvcp140d.dll .\\src\\tmp > log 2>&1";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\msvcp140d.dll C:\\WINDOWS\\SysWOW64 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tmsvcp140d.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\ucrtbased.dll .\\src\\tmp > log 2>&1";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\ucrtbased.dll C:\\WINDOWS\\SysWOW64 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tucrtbased.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\vcruntime140d.dll .\\src\\tmp > log 2>&1";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\vcruntime140d.dll C:\\WINDOWS\\SysWOW64 > log 2>&1";
        system(&komut[0]);
        cout<<"\n\tvcruntime140d.dll kopyalandi.\n"; 
    }
    finito:
    system("del log");
    cout<<"\nKurulum tamamlandi. Simdi bu klasoru silebilirsiniz. Devam etmek icin bir tusa basin...\n";
    getchar();
}