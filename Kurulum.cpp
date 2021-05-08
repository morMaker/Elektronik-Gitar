#include<iostream>
#include<Windows.h>
#include<clocale>

using namespace std;

int main(){
    string komut="";
    cout<<"***Kurulum basladi. Klasorler olusturuluyor...***\n";
// Klasör Oluşturma
    komut+="cd \"C:\\Program Files\" ";
    komut+="&& cd morMaker";
    int a = system(&komut[0]);
    if(a)
        system("cd \"C:\\Program Files\"  && md morMaker");
    system(&komut[0]);
    system( &(komut+"&& rd /s /q elektronik-gitar")[0] );
    komut+="&& md elektronik-gitar";
    system(&komut[0]);

    komut="";
    string dizin="\"C:\\Program Files\\morMaker\\elektronik-gitar";

// Verileri kopyalama
    cout<<"\n***Dosyalar kopyalaniyor.***\n\n";
    komut+="xcopy /E /I .\\src\\arduino "+dizin+"\\arduino\" ";
    komut+="&& xcopy \".\\src\\Elektronik Gitar.exe\" "+dizin+"\" /Y";
    komut+="&& xcopy .\\src\\app.ico "+dizin+"\"";
    system(&komut[0]);

// Gerekli izinleri sağlama
    komut="cd C:\\Program Files\\morMaker\\elektronik-gitar\\arduino";
    komut+="&& icacls . /grant Users:F";
    komut+="&& icacls . /grant Users:(OI)(CI)F";
    system(&komut[0]);
    
// Uygulama oluşturma
    cout<<"\n***Uygulama olusturuluyor***\n\n";
    komut="xcopy \".\\src\\Elektronik Gitar.lnk\" \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\" /Y ";
    system(&komut[0]);

// DLL :D
    cout<<"\n***Sistem taraniyor, lutfen bu ekrani kapatmayin...***\n";
    // system("sfc/scannow");
    dizin="C:\\WINDOWS\\system32";
    cout<<"\n***Eksik DLL dosyalari araniyor (system32)...***\n";

    komut="copy "+ dizin + "\\msvcp140d.dll .\\src\\tmp" ;
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\32\\msvcp140d.dll C:\\WINDOWS\\system32";
        system(&komut[0]);
        cout<<"\nmsvcp140d.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\ucrtbased.dll .\\src\\tmp" ;
    a=system(&komut[0]);
    if(a){
        komut="\ncopy .\\src\\dll\\32\\ucrtbased.dll C:\\WINDOWS\\system32";
        system(&komut[0]);
        cout<<"\nucrtbased.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\vcruntime140d.dll .\\src\\tmp" ;
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\32\\vcruntime140d.dll C:\\WINDOWS\\system32";
        system(&komut[0]);
        cout<<"\nvcruntime140d.dll kopyalandi.\n"; 
    }
    if(system("cd C:\\Windows\\SysWOW64"))
        goto finito;

    ///////////////////////////////////////////////////////////////////////////////////

    dizin="C:\\Windows\\SysWOW64";
    cout<<"\n***Eksik DLL dosyalari araniyor (SysWOW64)...***\n";

    komut="copy "+ dizin + "\\msvcp140d.dll .\\src\\tmp";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\msvcp140d.dll C:\\WINDOWS\\SysWOW64";
        system(&komut[0]);
        cout<<"\nmsvcp140d.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\ucrtbased.dll .\\src\\tmp";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\ucrtbased.dll C:\\WINDOWS\\SysWOW64";
        system(&komut[0]);
        cout<<"\nucrtbased.dll kopyalandi.\n"; 
    }

    komut="copy "+ dizin + "\\vcruntime140d.dll .\\src\\tmp";
    a=system(&komut[0]);
    if(a){
        komut="copy .\\src\\dll\\64\\vcruntime140d.dll C:\\WINDOWS\\SysWOW64";
        system(&komut[0]);
        cout<<"\nvcruntime140d.dll kopyalandi.\n"; 
    }
    finito:
    cout<<"\n***Kurulum tamamlandi. Simdi bu klasoru silebilirsiniz. Devam etmek icin bir tusa basin...***\n";
    getchar();
}