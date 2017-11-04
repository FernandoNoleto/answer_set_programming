#include <stdio.h>
#include <string.h>

int main(){

    char AC[11];
    char AL[11];
    char AP[11];
    char AM[11];
    char BA[11];
    char CE[11];
    char DF[11];
    char ES[11];
    char GO[11];
    char MA[11];
    char MT[11];
    char MS[11];
    char MG[11];
    char PA[11];
    char PB[11];
    char PR[11];
    char PE[11];
    char PI[11];
    char RJ[11];
    char RN[11];
    char RS[11];
    char RO[11];
    char RR[11];
    char SC[11];
    char SP[11];
    char SE[11];
    char TO[11];

    puts("\nUNIVERSIDADE FEDERAL DO TOCANTINS");
    puts("COLORAÇÃO DE GRAFOS USANDO ASP");
    puts("FEITO POR: FERNANDO NOLETO");

    puts("\n\nCOLORAÇÃO DO MAPA DO BRASIL\n");
    puts("-------------------------------------------------------------------\n");
    puts("\nEXECUÇÃO DO CLINGO:\n");
    
    FILE* arq = fopen("resultado.txt", "r");
    
    if(!arq){
        puts("Não foi possível abrir o arquivo");
        return 0;
    
    }
    
    char* resultado;
    char linha[500];
    int i = 1;
    while(!feof(arq)){
        if(i == 5){
            fscanf(arq, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",
            RO,PA,PI,PB,AL,GO,SP,ES,AM,TO,RN,PE,SE,MG,PR,RS,AC,RR,MT,MA,DF,RJ,SC,AP,CE,BA,MS);
            printf("%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",
            RO,PA,PI,PB,AL,GO,SP,ES,AM,TO,RN,PE,SE,MG,PR,RS,AC,RR,MT,MA,DF,RJ,SC,AP,CE,BA,MS);
        }
        resultado = fgets(linha, sizeof(linha), arq);
        if(resultado)
            printf("%s", linha);
        
        i++;
    }

    puts("\n------------------------------------------------------------");
    puts("\nESTADO E SUA COR:\n");

    if(RO[8] == 'r' || RO[9] == 'r'){
        puts("RO: VERMELHO");
    }else if(RO[8] == 'b' || RO[9] == 'b'){
        puts("RO: AZUL");
    }else if(RO[8] == 'g' || RO[9] == 'g'){
        puts("RO: VERDE");
    }else{
        puts("RO: AMARELO");
    }

    if(PA[8] == 'r' || PA[9] == 'r'){
        puts("PA: VERMELHO");
    }else if(PA[8] == 'b' || PA[9] == 'b'){
        puts("PA: AZUL");
    }else if(PA[8] == 'g' || PA[9] == 'g'){
        puts("PA: VERDE");
    }else{
        puts("PA: AMARELO");
    }

    if(PI[8] == 'r' || PI[9] == 'r'){
        puts("PI: VERMELHO");
    }else if(PI[8] == 'b' || PI[9] == 'b'){
        puts("PI: AZUL");
    }else if(PI[8] == 'g' || PI[9] == 'g'){
        puts("PI: VERDE");
    }else{
        puts("PI: AMARELO");
    }

    if(PB[8] == 'r' || PB[9] == 'r'){
        puts("PB: VERMELHO");
    }else if(PB[8] == 'b' || PB[9] == 'b'){
        puts("PB: AZUL");
    }else if(PB[8] == 'g' || PB[9] == 'g'){
        puts("PB: VERDE");
    }else{
        puts("PB: AMARELO");
    }

    if(AL[8] == 'r' || AL[9] == 'r'){
        puts("AL: VERMELHO");
    }else if(AL[8] == 'b' || AL[9] == 'b'){
        puts("AL: AZUL");
    }else if(AL[8] == 'g' || AL[9] == 'g'){
        puts("AL: VERDE");
    }else{
        puts("AL: AMARELO");
    }

    if(GO[8] == 'r' || GO[9] == 'r'){
        puts("GO: VERMELHO");
    }else if(GO[8] == 'b' || GO[9] == 'b'){
        puts("GO: AZUL");
    }else if(GO[8] == 'g' || GO[9] == 'g'){
        puts("GO: VERDE");
    }else{
        puts("GO: AMARELO");
    }

    if(SP[8] == 'r' || SP[9] == 'r'){
        puts("SP: VERMELHO");
    }else if(SP[8] == 'b' || SP[9] == 'b'){
        puts("SP: AZUL");
    }else if(SP[8] == 'g' || SP[9] == 'g'){
        puts("SP: VERDE");
    }else{
        puts("SP: AMARELO");
    }

    if(ES[8] == 'r' || ES[9] == 'r'){
        puts("ES: VERMELHO");
    }else if(ES[8] == 'b' || ES[9] == 'b'){
        puts("ES: AZUL");
    }else if(ES[8] == 'g' || ES[9] == 'g'){
        puts("ES: VERDE");
    }else{
        puts("ES: AMARELO");
    }

    if(AM[8] == 'r' || AM[9] == 'r'){
        puts("AM: VERMELHO");
    }else if(AM[8] == 'b' || AM[9] == 'b'){
        puts("AM: AZUL");
    }else if(AM[8] == 'g' || AM[9] == 'g'){
        puts("AM: VERDE");
    }else{
        puts("AM: AMARELO");
    }

    if(TO[8] == 'r' || TO[9] == 'r'){
        puts("TO: VERMELHO");
    }else if(TO[8] == 'b' || TO[9] == 'b'){
        puts("TO: AZUL");
    }else if(TO[8] == 'g' || TO[9] == 'g'){
        puts("TO: VERDE");
    }else{
        puts("TO: AMARELO");
    }

    if(RN[8] == 'r' || RN[9] == 'r'){
        puts("RN: VERMELHO");
    }else if(RN[8] == 'b' || RN[9] == 'b'){
        puts("RN: AZUL");
    }else if(RN[8] == 'g' || RN[9] == 'g'){
        puts("RN: VERDE");
    }else{
        puts("RN: AMARELO");
    }

    if(PE[8] == 'r' || PE[9] == 'r'){
        puts("PE: VERMELHO");
    }else if(PE[8] == 'b' || PE[9] == 'b'){
        puts("PE: AZUL");
    }else if(PE[8] == 'g' || PE[9] == 'g'){
        puts("PE: VERDE");
    }else{
        puts("PE: AMARELO");
    }

    if(SE[8] == 'r' || SE[9] == 'r'){
        puts("SE: VERMELHO");
    }else if(SE[8] == 'b' || SE[9] == 'b'){
        puts("SE: AZUL");
    }else if(SE[8] == 'g' || SE[9] == 'g'){
        puts("SE: VERDE");
    }else{
        puts("SE: AMARELO");
    }

    if(MG[8] == 'r' || MG[9] == 'r'){
        puts("MG: VERMELHO");
    }else if(MG[8] == 'b' || MG[9] == 'b'){
        puts("MG: AZUL");
    }else if(MG[8] == 'g' || MG[9] == 'g'){
        puts("MG: VERDE");
    }else{
        puts("MG: AMARELO");
    }

    if(PR[8] == 'r' || PR[9] == 'r'){
        puts("PR: VERMELHO");
    }else if(PR[8] == 'b' || PR[9] == 'b'){
        puts("PR: AZUL");
    }else if(PR[8] == 'g' || PR[9] == 'g'){
        puts("PR: VERDE");
    }else{
        puts("PR: AMARELO");
    }

    if(RS[8] == 'r' || RS[9] == 'r'){
        puts("RS: VERMELHO");
    }else if(RS[8] == 'b' || RS[9] == 'b'){
        puts("RS: AZUL");
    }else if(RS[8] == 'g' || RS[9] == 'g'){
        puts("RS: VERDE");
    }else{
        puts("RS: AMARELO");
    }

    if(AC[8] == 'r' || AC[9] == 'r'){
        puts("AC: VERMELHO");
    }else if(AC[8] == 'b' || AC[9] == 'b'){
        puts("AC: AZUL");
    }else if(AC[8] == 'g' || AC[9] == 'g'){
        puts("AC: VERDE");
    }else{
        puts("AC: AMARELO");
    }

    if(RR[8] == 'r' || RR[9] == 'r'){
        puts("RR: VERMELHO");
    }else if(RR[8] == 'b' || RR[9] == 'b'){
        puts("RR: AZUL");
    }else if(RR[8] == 'g' || RR[9] == 'g'){
        puts("RR: VERDE");
    }else{
        puts("RR: AMARELO");
    }

    if(MT[8] == 'r' || MT[9] == 'r'){
        puts("MT: VERMELHO");
    }else if(MT[8] == 'b' || MT[9] == 'b'){
        puts("MT: AZUL");
    }else if(MT[8] == 'g' || MT[9] == 'g'){
        puts("MT: VERDE");
    }else{
        puts("MT: AMARELO");
    }

    if(MA[8] == 'r' || MA[9] == 'r'){
        puts("MA: VERMELHO");
    }else if(MA[8] == 'b' || MA[9] == 'b'){
        puts("MA: AZUL");
    }else if(MA[8] == 'g' || MA[9] == 'g'){
        puts("MA: VERDE");
    }else{
        puts("MA: AMARELO");
    }

    if(DF[8] == 'r' || DF[9] == 'r'){
        puts("DF: VERMELHO");
    }else if(DF[8] == 'b' || DF[9] == 'b'){
        puts("DF: AZUL");
    }else if(DF[8] == 'g' || DF[9] == 'g'){
        puts("DF: VERDE");
    }else{
        puts("DF: AMARELO");
    }

    if(RJ[8] == 'r' || RJ[9] == 'r'){
        puts("RJ: VERMELHO");
    }else if(RJ[8] == 'b' || RJ[9] == 'b'){
        puts("RJ: AZUL");
    }else if(RJ[8] == 'g' || RJ[9] == 'g'){
        puts("RJ: VERDE");
    }else{
        puts("RJ: AMARELO");
    }

    if(SC[8] == 'r' || SC[9] == 'r'){
        puts("SC: VERMELHO");
    }else if(SC[8] == 'b' || SC[9] == 'b'){
        puts("SC: AZUL");
    }else if(SC[8] == 'g' || SC[9] == 'g'){
        puts("SC: VERDE");
    }else{
        puts("SC: AMARELO");
    }

    if(AP[8] == 'r' || AP[9] == 'r'){
        puts("AP: VERMELHO");
    }
    else if(AP[8] == 'b' || AP[9] == 'b'){
        puts("AP: AZUL");
    }else if(AP[8] == 'g' || AP[9] == 'g'){
        puts("AP: VERDE");
    }else{
        puts("AP: AMARELO");
    }

    if(CE[8] == 'r' || CE[9] == 'r'){
        puts("CE: VERMELHO");
    }else if(CE[8] == 'b' || CE[9] == 'b'){
        puts("CE: AZUL");
    }else if(CE[8] == 'g' || CE[9] == 'g'){
        puts("CE: VERDE");
    }else{
        puts("CE: AMARELO");
    }

    if(BA[8] == 'r' || BA[9] == 'r'){
        puts("BA: VERMELHO");
    }else if(BA[8] == 'b' || BA[9] == 'b'){
        puts("BA: AZUL");
    }else if(BA[8] == 'g' || BA[9] == 'g'){
        puts("BA: VERDE");
    }else{
        puts("BA: AMARELO");
    }

    if(MS[8] == 'r' || MS[9] == 'r'){
        puts("MS: VERMELHO");
    }else if(MS[8] == 'b' || MS[9] == 'b'){
        puts("MS: AZUL");
    }else if(MS[8] == 'g' || MS[9] == 'g'){
        puts("MS: VERDE");
    }else{
        puts("MS: AMARELO");
    }

    


    fclose(arq);
    
    return 0;

}

/*
    FILE* arq = fopen("resultado.txt", "r");
    char* resultado;
    
    if(!arq){
        cout << "Não foi possível abrir o arquivo" << endl;
        return 0;
    }
    

    char linha[400];
    int i = 1;

    while(!feof(arq)){
        resultado = fgets(linha, sizeof(linha), arq);
        if(resultado)
            cout << "Linha " << i << ": " << linha;
        
        
        if(strcmp(linha, "SATISFIABLE") == 1){
            cout << "Tem solução!!" << endl;
        }
        i++;
    }
    
    fclose(arq);
    */
