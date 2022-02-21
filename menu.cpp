/*

feature list
------------------
  
  carton calc: will get ingrediants and costs needed to craft cartons
  swamp joint calc: will get the ingrediants and costs needed to craft swamp joints.
  moonshine cost calc : will get the ingrediants and costs needed to make moonshine.
  tobacco crafting calc : takes tobacco amount and finds how many cartons you can make and how much rolling paper you will need.
  gold calculator: tells you how much gold you can make and how much it costs.
  gold something that klw wanted : will take the amount of gold bars and tell you how much you will need to buy the nuggets for
  ore calculator tells how much profit will be made. // processor price = 7 | 5 needed per bar

*/


using namespace std;
#include <iostream>

    int main()
    {
     int menuc;
     do
     {


      std::cout <<"0. close program - do not use on web version\n"<<"1. carton cost calculator\n"<<"2. swamp herb cost calculator \n" <<"3. moonshine cost calculator\n" 
      <<"4. tobacco crafting calculator \n" <<"5. Gold calculator\n" << "9. HELP!"<< "\n\n" ;
      std::cin >> menuc;

    switch(menuc)
       {
         case 0:
         {
         std::cout << "quitting program \n \n";
          }
            break;

         case 1:
         {

             std::cout << "input carton amount" << "\n \n";
             int c;
             std::cin >> c;

            std::cout << "Tobacco cost? | if grown put 0.15 \n \n";
             float t1;
            std::cin >> t1;

            int tt = c * 6; // get carton amount times by 6 for tobacco amount
            int ppt = c * 3; //get carton times times by 3 for paper amount

            float tob = tt * t1; // price tob
            float pp = ppt * 0.45; // price rolling paper 0.45 for riz cost
            float total = tob + pp; // total cost of mats
            float totalm = c * 8.50; // total sell price
            float totalp = totalm - total; // total profit



              std::cout <<"\nyou will need \n" <<  tt << " : $ " << tob  << 
              " tobacco  \n" << ppt << " : $ " << pp << " rolling paper \n" 
               << "total cost: $" << total << "\n" <<"total made from sale: $"
             << totalm << "\n" << "total profit made: $" << totalp << "\n\n";
      
         }
       
          break;

            case 2:
            {
            std::cout <<"input swamp joint amount" << "\n \n";
            int swamp;
            std::cin >> swamp;

            std::cout << "Swamp herb cost? | if grown put $1 \n \n";
            float swampg;
            std::cin >> swampg;

            std::cout << "How much is swamp herb selling for? | average is $13 \n\n";
            float swamps;
            std::cin >> swamps;

            int saramount =  swamp * 3; // gets the riz and swamp amount
            float swampcost = saramount * swampg; //gets the cost of the swamp herb used
            float rollingcost = saramount * 0.45; // gets the cost of the rolling paper

            float totalm2 = swampcost + rollingcost; // total mat cost
            float total2 = swamps * swamp; // total total sell price of swamp herb as joints
            float totalp2 = total2 - totalm2; //total profit

         std::cout << "\n" << "you will need \n" <<  saramount << " : $ " <<  swampcost << " swamp herb  \n"
          << saramount << " : $ " << rollingcost << " rolling paper \n" 
         << "total cost: $" << totalm2 << "\n" <<"total made from sale: $"
        << total2 << "\n" << "total profit made: $" << totalp2 << "\n\n";
              }
            break;

            case 3:
            {

            //get moonshine amount
            std::cout <<"input moonshine amount" << "\n \n";
            int moons;
            std::cin >> moons;

            //get sugarcane price
            std::cout << "cost of sugarcane? | put 0.19 if grown \n \n";
            float csugar;
            std::cin >> csugar;

            //moonshine sell price
            std::cout << "moonshine sell price? | average is $13 \n\n";
            float moonsell;
            std::cin >> moonsell; 

            // only used for the cost per shine
            std::cout << "how much mash did u make per batch? \n\n";
            int mash;
            std::cin >> mash;

            // times sugar amount by 2 because 2 sugar

            float sugar = csugar * 2;

            int finalshine = moons / mash;
            float onemashmatcost =  2 + 2.5 + sugar; 
            float allmashcost = onemashmatcost * finalshine;
            float finalcost = allmashcost / moons;
            float finalshinesale = moonsell * moons;
            float shineprof = finalshinesale - allmashcost ;

            std::cout <<"\namount of mashes: "<< finalshine <<"\n" << "material cost of the mashes: " << allmashcost << "\n" << "individual moonshine cost: " << finalcost <<"\n"
            << "total amount made: " << finalshinesale << "\n" << "total profit made after sell: " << shineprof << "\n\n" ;

            }
            break;

            case 4:
            {
            std::cout << "enter tobacco amount" << "\n\n";
             int tobacco;
             std::cin >> tobacco;
       
             int carton = tobacco / 6;
             int paper = tobacco / 2;
             float paperc = paper * 0.45;
             float cartonp = carton * 8.5;

             std::cout << "\nyou will need \n" <<  paper << " rolling paper | cost: $" << paperc << "\n" << "You can make " << carton << " cartons | $"  << cartonp << "\n\n" ;


            }
            break;

            case 5:
            {

              std::cout << "input gold amount | anything under 100 wont work"<< "\n\n";
              int golda;
              std::cin >> golda;

              std::cout << "how much did u buy for? | put 0 if panned"<< "\n\n";
              float goldp;
              std::cin >> goldp;

              std::cout << "gold bar price | 200 is about average no api to grab from :("<< "\n\n";
              float goldb;
              std::cin >> goldb;

              float goldap = golda * goldp; // get cost of gold nugs
              float goldproc = 50; // processing cost
              int goldpa = golda / 100; // divides the nuggets by 100 to get the gold bar amount
              int goldpra = golda / 200; // divides by 200 because because max inv space for full bar
              int agolds = goldpa * goldb; // get total cost of made
              int totalpro = goldproc * goldpra; // gets total process cost
              float totalfa = totalpro + goldap; // gets total cost of mats
              float totalmadeg = agolds - totalfa; // gets total profit

              std::cout << "\nyou will need to do: " << goldpra <<" trips to the processor\n" 
              <<"you will get: " << goldpa <<" gold bars\n"  
              << "you will spend: " << totalpro << " on processing \n" 
              <<"your total spend is: " << totalfa 
              << "\ntotal money made is: " << agolds  
              <<"\nyour total profit is: " << totalmadeg << "\n\n";
            }
          break;

          case 6:
          {
          
          std::cout << "amount of ore?\n\n";
          int oreamount;
          std::cin >> oreamount;
            
          std::cout << "sell price of ore?";
          int oresell;
          std::cin >> oresell;

          
            
            
          }

          case 9:
          {

            std::cout << "\ncarton calc: will get ingrediants and costs needed to craft cartons. \n" <<
            "swamp calc: will get the ingrediants and costs needed to craft swamp joints.\n"<<
            "moonshine calc : will get the ingrediants and costs needed to make moonshine.\n"<<
           "tobacco calc : takes tobacco amount and finds how many cartons you can make and how much rolling paper you will need.\n" <<
           "gold calculator: tells you how much gold you can make and how much it costs. \n\n";

          }
          break;

         }
       }
       while(menuc != 0);
      }



