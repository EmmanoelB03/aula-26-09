float variancia(int n){
    float list[n];
    float media;
    float somatorio = 0;
    float somatorioDaVariancia = 0;
    float variancia;
    //achando a m�dia para a formula da vari�ncia
    for(int i = 0; i < n; i++){
        float val;
        printf("Escreva o valor %d: ", i+1);
        scanf("%d", &val);
        list[i] = val;
        somatorio += val;
    }

    media = somatorio/n;
    //achando a vari
    for(int i = 0; i < n; i++){

        somatorioDaVariancia = (list[i] -  media)*(list[i] - media);

    }

    variancia = somatorioDaVariancia/(n-1);

    return variancia;

}



