#include <iostream>
#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;


PhysicalNumber::PhysicalNumber(double value, Unit u){
    this->val=value;
    this->type=u;
    
}
const PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& p)const{
    switch (p.type)
    {
        case Unit::KM:
        if(this->type==Unit::KM){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::M){
             return PhysicalNumber(p.val*1000+this->val,this->type);

        }
        if(this->type==Unit::CM){
             return PhysicalNumber(p.val*100000+this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC
        ||this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::KG){
            throw "Not Same Dimension ";
        }
        break;

                case Unit::M:
                if(this->type==Unit::M){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::KM){
             return PhysicalNumber(p.val/1000+this->val,this->type);

        }
        if(this->type==Unit::CM){
             return PhysicalNumber(p.val/100+this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        
        break;

        case Unit::CM:
                if(this->type==Unit::CM){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::KM){
             return PhysicalNumber(p.val/100000+this->val,this->type);

        }
        if(this->type==Unit::M){
             return PhysicalNumber(p.val/100+this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::HOUR:
                if(this->type==Unit::HOUR){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::MIN){
             return PhysicalNumber(p.val*60+this->val,this->type);

        }
        if(this->type==Unit::SEC){
             return PhysicalNumber(p.val*360+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM
        ||this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;


        case Unit::MIN:
                if(this->type==Unit::MIN){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::HOUR){
             return PhysicalNumber(p.val/60+this->val,this->type);

        }
        if(this->type==Unit::SEC){
             return PhysicalNumber(p.val*60+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;


        case Unit::SEC:
                if(this->type==Unit::SEC){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::MIN){
             return PhysicalNumber(p.val/60+this->val,this->type);

        }
        if(this->type==Unit::HOUR){
             return PhysicalNumber(p.val/360+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::KG){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::TON:
                if(this->type==Unit::TON){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::KG){
             return PhysicalNumber(p.val*1000+this->val,this->type);

        }
        if(this->type==Unit::G){
             return PhysicalNumber(p.val*1000000+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::KG:
                if(this->type==Unit::KG){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::TON){
             return PhysicalNumber(p.val/1000+this->val,this->type);

        }
        if(this->type==Unit::G){
             return PhysicalNumber(p.val*1000+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::G:
                if(this->type==Unit::G){
            return PhysicalNumber(p.val+this->val,this->type);
        }
        if(this->type==Unit::KG){
             return PhysicalNumber(p.val/1000+this->val,this->type);

        }
        if(this->type==Unit::TON){
             return PhysicalNumber(p.val/1000000+this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;
    }

return *this;
}

PhysicalNumber& PhysicalNumber :: operator+=(const PhysicalNumber& p){
    return *this;
}
const PhysicalNumber PhysicalNumber:: operator+()const{
    return *this;
}
const PhysicalNumber PhysicalNumber:: operator-(const PhysicalNumber& p) const{

 switch (p.type)
    {
        case Unit::KM:
        if(this->type==Unit::KM){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::M){
             return PhysicalNumber(p.val*1000-this->val,this->type);

        }
        if(this->type==Unit::CM){
             return PhysicalNumber(p.val*100000-this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC
        ||this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::KG){
            throw "Not Same Dimension ";
        }
        break;

                case Unit::M:
                if(this->type==Unit::M){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::KM){
             return PhysicalNumber(p.val/1000-this->val,this->type);

        }
        if(this->type==Unit::CM){
             return PhysicalNumber(p.val/100-this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        
        break;

        case Unit::CM:
                if(this->type==Unit::CM){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::KM){
             return PhysicalNumber(p.val/100000-this->val,this->type);

        }
        if(this->type==Unit::M){
             return PhysicalNumber(p.val/100-this->val,this->type);

        }
        if(this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::HOUR:
                if(this->type==Unit::HOUR){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::MIN){
             return PhysicalNumber(p.val*60-this->val,this->type);

        }
        if(this->type==Unit::SEC){
             return PhysicalNumber(p.val*360-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM
        ||this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;


        case Unit::MIN:
                if(this->type==Unit::MIN){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::HOUR){
             return PhysicalNumber(p.val/60-this->val,this->type);

        }
        if(this->type==Unit::SEC){
             return PhysicalNumber(p.val*60-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::G){
            throw "Not Same Dimension ";
        }
        break;


        case Unit::SEC:
                if(this->type==Unit::SEC){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::MIN){
             return PhysicalNumber(p.val/60-this->val,this->type);

        }
        if(this->type==Unit::HOUR){
             return PhysicalNumber(p.val/360-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::TON||this->type==Unit::KG||this->type==Unit::KG){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::TON:
                if(this->type==Unit::TON){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::KG){
             return PhysicalNumber(p.val*1000-this->val,this->type);

        }
        if(this->type==Unit::G){
             return PhysicalNumber(p.val*1000000-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::KG:
                if(this->type==Unit::KG){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::TON){
             return PhysicalNumber(p.val/1000-this->val,this->type);

        }
        if(this->type==Unit::G){
             return PhysicalNumber(p.val*1000-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;

        case Unit::G:
                if(this->type==Unit::G){
            return PhysicalNumber(p.val-this->val,this->type);
        }
        if(this->type==Unit::KG){
             return PhysicalNumber(p.val/1000-this->val,this->type);

        }
        if(this->type==Unit::TON){
             return PhysicalNumber(p.val/1000000-this->val,this->type);

        }
        if(this->type==Unit::KM||this->type==Unit::M||this->type==Unit::CM||
        this->type==Unit::HOUR||this->type==Unit::MIN||this->type==Unit::SEC){
            throw "Not Same Dimension ";
        }
        break;
    }

return *this;
}
PhysicalNumber& PhysicalNumber:: operator-=(const PhysicalNumber& p){
    return *this;
}
const PhysicalNumber PhysicalNumber:: operator-()const{
    return PhysicalNumber(this->val*-1,this->type);
}
bool ariel:: operator>(const PhysicalNumber& p1, const PhysicalNumber& p2){
    return true;
}
bool ariel:: operator<(const PhysicalNumber& p1, const PhysicalNumber& p2){
    return true;
 
}
 bool ariel::  operator>=(const PhysicalNumber& p1, const PhysicalNumber& p2){
     return false;
 }
 bool ariel::  operator<=(const PhysicalNumber& p1, const PhysicalNumber& p2){
     return false;
 }
 bool ariel::  operator!=(const PhysicalNumber& p1, const PhysicalNumber& p2){
     return true;
 }
 bool ariel:: operator==(const PhysicalNumber& p1, const PhysicalNumber& p2){
     return true;
 }
 PhysicalNumber& PhysicalNumber::  operator++(){
return *this;
 }
    //postfix
    const PhysicalNumber PhysicalNumber:: operator++(int x){
        return *this;

    }

    //prefix
    PhysicalNumber& PhysicalNumber:: operator--(){
        return *this;

    }
    //postfix
    const PhysicalNumber PhysicalNumber::  operator--(int x){
        return *this;

    }
    // i/o stream
     ostream& ariel::operator<<(ostream& os, const PhysicalNumber& p){
         switch (p.type)
         {
             case Unit::KM:
                 os<<p.val<<"[km]"<<endl;
                 return os;
                 break;
             case Unit::M:
                 os<<p.val<<"[m]"<<endl;
                 return os;
                 break;
              case Unit::CM:
                 os<<p.val<<"[cm]"<<endl;
                 return os;
                 break;
            case Unit::TON:
                 os<<p.val<<"[ton]"<<endl;
                 return os;
                 break;
            case Unit::KG:
                 os<<p.val<<"[kg]"<<endl;
                 return os;
                 break;
            case Unit::G:
                 os<<p.val<<"[g]"<<endl;
                 return os;
                 break;
            case Unit::HOUR:
                 os<<p.val<<"[hour]"<<endl;
                 return os;
                 break;
            case Unit::MIN:
                 os<<p.val<<"[min]"<<endl;
                 return os;
                 break;
            case Unit::SEC:
                 os<<p.val<<"[sec]'"<<endl;
                 return os;
                 break;
         }
         
         return os;

    }
     istream& ariel:: operator>>(istream& is, PhysicalNumber& p){
         return is;

    }



//int main(){
    // Unit u=Unit::HOUR;
    // switch (u)
    // {
    //     case Unit::HOUR:
    //           cout<<"I am Km"<<endl;

    //         break;
    
    //     default:
    //         break;
    // }
    // cout<<"sapir"<<endl;
   // PhysicalNumber x(7,Unit::KG);
   // PhysicalNumber y(600,Unit::G);
    // PhysicalNumber z=y-x;


   // cout<<x<<endl;
    //cout<<y<<endl;
   // cout<<z<<endl;


//}
