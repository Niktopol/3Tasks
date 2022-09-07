#include <iostream>
#include <cmath>
void t1(int b, int c){

    if (b == 0){
        std::cout<<"Нет решений";
    }else{
        std::cout<<(-c)/b;
    };
    std::cout<<std::endl;
};
void t2(int a, int b, int c){
    if (a == 0){
        t1(b,c);
    }else{
        if (b == 0){
            if(c == 0){
                std::cout<<0<<" , "<<0;
            }else{
                if (((-c)/a)>0){
                    std::cout<<sqrt(((-c)/a))<<" , "<<-sqrt(((-c)/a));
                }else{
                    std::cout<<"Нет решений";
                }
            }
        }else{
            if (c == 0){
                std::cout<<0<<" , ";t1(a,b);
            }else{
                int d = b*b - 4*a*c;
                if (d > 0){
                    d = sqrt(d);
                    std::cout<< (-b + d)/(2*a)<< " , " << (-b - d)/(2*a);
                }else if (d == 0){
                    std::cout<< (-b)/(2*a)<< " , " << (-b)/(2*a);
                }else{
                    std::cout<<"Нет решений";
                }
            }
        }
    };
    std::cout<<std::endl;
};
void lds(bool l, bool d, bool s){
    if (l){
        std::cout<<"Светло";
    }else{
        if (s){
            if (d){
                std::cout<<"Светло";
            }else{
                std::cout<<"Темно";
            }
        }else{
            std::cout<<"Темно";
        }
    };
};
int main()
{
    int a,b,c;
    std::cout<<"Введите коэффициенты b,c для уравнения вида b*x + c = 0"<< std::endl;
    std::cin>>b;
    std::cin>>c;
    t1(b,c);
    std::cout<<"Введите коэффициенты a,b,c для уравнения вида a*x*x + b*x + c = 0"<< std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    t2(a,b,c);
    std::cout<<"Введите 1/0 (истина/ложь) для следующих утверждений:"<< std::endl;
    std::cout<<"На улице день?"<< std::endl;
    bool d;std::cin>>d;
    std::cout<<"Шторы раздвинуты?"<< std::endl;
    bool s;std::cin>>s;
    std::cout<<"Лампа включена?"<< std::endl;
    bool l;std::cin>>l;
    lds(l,d,s);
    return 0;
};
