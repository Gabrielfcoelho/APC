
int validaPeso(double pesoKG)
{
    if(pesoKG>=0)
    return 1;
    else
    return 0;
}

void fazTonelada(double pesoKG)
{
    double pesoT= pesoKG/1000;
    printf("%0.4lf\n", pesoT);
}

void fazGrama(double pesoKG)
{
    double pesoG= pesoKG*1000;
    printf("%0.4lf\n", pesoG);
}