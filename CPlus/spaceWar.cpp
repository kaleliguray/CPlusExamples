#include <iostream>

int main(){

	
  double weight = 0;
  int x;
  
  std::cout << "What is your earth weight?\n";

  std::cin >> weight;

  std::cout <<"\nI have information for the following planets:\n\n";
  std::cout << " 1.Venus  2.Mars  3.Jupiter\n";
  std::cout << " 4.Saturn  5.Uranus  6.Neptun\n";

  std::cout << "Which planet are you visiting?\n";

  std::cin >> x;

  if(x == 1){
  	weight = weight * 0.78;
  }else if (x == 2)
  {
  	weight = weight * 0.39;	
  }else if (x == 3)
  {
  	weight = weight * 2.65;
  }else if (x == 4)
  {
  	weight = weight * 1.17;
  }else if (x == 5)
  {
  	weight = weight * 1.05;
  }else if (x == 6)
  {
  	weight = weight * 1.23;
  }

  /*switch(x){
    case 1 :
      weight = weight * 0.78;
      break;
    case 2 :
      weight = weight * 0.39;
      break;
    case 3 :
      weight = weight * 2.65;
      break;
    case 4 :
      weight = weight * 1.17;
      break;
    case 5 :
      weight = weight * 1.05;
      break;
    case 6 :
      weight = weight * 1.23;
      break;
    default : 
      std::cout << "You are in space\n";             
  }*/

  std::cout << "\nYour weight : "<<weight<<"\n";


}