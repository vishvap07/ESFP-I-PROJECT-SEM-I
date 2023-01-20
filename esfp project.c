#include <stdio.h>
#include <string.h>

int mainpage();
int mainpage()
{
	printf("			~WELCOME~	\n");
	printf("\n");
	printf("Select a choice according to your requirement!");
	printf("\n");
	
    int choice;
    pass:
    printf("1.Injection Moulding Company\n");
    printf("\n");
    printf("2.Automation\n");
    printf("\n");
    printf("3.Digital solutions in injection moulding\n");
    printf("\n");
    printf("4.Injection Moulding Process\n");
    printf("\n");
    printf("5.Service\n");
    printf("\n");
    printf("6.Exit");
    printf("\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    printf("\n");
    switch(choice)
    {
        case 1: imc();
                goto pass;
                break;
        case 2: aut();
                 goto pass;
                 break;
        case 3: digisol();
                goto pass;
                break;
        case 4: imp();
                break;
                goto pass;
        case 5: ser();
                goto pass;
                break;
        case 6:  exit(0);
        default: printf("wrong choice\n");
        
        
    }
}
int ser();
int imc();
int imp();
int aut();
int digisol();

int ser()
{
	printf("SERVICE\n");
	printf("High availability for the life of the machine.\n Reliable service and spare parts management regionally on site.\n");
	printf("\n");
	printf("- Available 24/7.\n");
	printf("- Rapid on site and online support.\n");
	printf("- Immediate delivery of your spare parts.\n");
	printf("- Building up the knowledge of your specialists.\n");
	printf("- Support from our in-house injection moulding experts.\n");
	printf("\n");
    
    
    
}

int imp()
{
	printf("INJECTION MOULDING PROCESS\n");
	printf("Thinking ahead in plastics: Serving the diverse requirement of mordern world with resource-saving processes.\n");
	printf("\n");
	printf("Your Advantages With Our Injection Moulding Processes:\n");
	printf("- Complete production cell from a single source for increased part quality.\n");
	printf("- Variety of materials can be used.\n");
	printf("- Optimal settings thanks to innovative software solutions.\n");
	printf("- User support for stable production processes.\n");
	printf("\n");
    
}

int digisol()
{
	printf("DIGITAL SOLUTIONS IN INJECTION MOULDING\n");
	printf("From part design and mold sampling to production and maintenance & service.\n We have the right digital solutions to help you utilize the full potential of your injection moulding machines and sustainably reduce your carbon footprint.\n");
	printf("\n");
	printf("Your advantages with our digital solutions");
	printf("- Compenstate process fluctuations for constant part quality.\n");
	printf("- Reduce energy consumption and scrap.\n");
	printf("- Reduce batch fluctuations when using recycled materials.\n");
	printf("- Everything view for better planning and resources\n");
	printf("- Simple operations for minimising errors.\n");
	printf("- State of the art security standards protect ypur data.\n");
	printf("\n");	
	printf("The life cycle of your plastic product(The basis of digitisation strategy)\n");
	printf("Already during the design phase of your products and before starting series production, known as sampling, you can leverage great optimisation potentials with digital solutions.\nDuring production, intelligent assistance systems for shop floor management ensure high productivity. In the area of maintenance and service, intelligent monitoring and remote maintenance tools maximise your availability.\n");
	printf("\n");
	
	int choice2;
	digisol:
		printf("Mould sampling\n");
		printf("\n");
		printf("Production\n");
		printf("\n");
		printf("Maintenance and service\n");
		printf("\n");
		printf("Design\n");
		printf("\n");
		printf("Select a category\n");
    scanf("%d",&choice2);
    printf("\n");
    switch(choice2)
    {
        case 1: ms();
                goto digisol;
                break;
        case 2: pro();
                 goto digisol;
                 break;
        case 3: mns();
                goto digisol;
                break;
        case 4: de();
        		goto digisol;
                break;
        
        default: printf("choice doesn't exist\n");
		
	}
}

int ms();
int pro();
int mns();
int de();

int ms()
{
	printf("MOULD SAMPLING\n");
	printf("The typical preparations for mould sampling, such as calculation of the holding pressure time, cooling time, cycle time or shot volume, are optimised by our intelligent assistance system.\n Series production can be started even faster\n");
	printf("\n");
	printf("Advantages of Digital Solutions in Injection Mould Sampling\n");
	printf("- Start series production faster\n");
	printf("- Reduces costs and energy and avoid problems in series production\n");
	printf("- Reduce cycle time\n");
	printf("- Simple operation supports your employess\n");
}

int pro()
{
	printf("PRODUCTION\n");
	printf("Improve the availability of your production machines and increase the quality of your products by using digital solutions.\n The optimum production parameters are determined, actively suggested or automatically set during ongoing production.\n");
	printf("\n");
	printf("- Digital products promote sustainable production.\n");
	printf("- A stable production process saves costs.\n");
	printf("- Simple planning through machine data acquisition.\n");
	printf("- Intuitive operation supports your employees.\n");
	printf("- Cross-site compliance with process setting.\n");
	printf("- Documented quality and traceability.\n");
}

int mns()
{
	printf("MAINTENANCE & SERVICES\n");
	printf("Avoid unplanned downtime and troubleshoot quickly with our intelligent monitoring and remote maintenance tools.\n Fast on-site and online support from our global service experts guarantees you high-performance and efficient production. \n");
	printf("Reactive Maintenance:\n");
	printf("- Extensive hotline capacity with broad specialist knowledge.\n");
	printf("- Quickly start problem solving with remote maintenance tools.\n");
	printf("- High parts availability.\n");
	printf("\n");
	printf("Preventive Maintenance:\n");
	printf("- Individualised maintenance at regular intervals.\n");
	printf("- Injection moulding machine service support from company.\n");
	printf("- Safety and reliability in your machinery.\n");
	printf("\n");
	printf("Predictive Maintenance:\n");
	printf("Monitoring of process-critial machine components with condition moinitoring.\n");
	printf("Predict the wear and failure of your components in good time.\n");
	printf("Avoid unplanned downtime and unnecessary repairs.\n");
	printf("\n");
}

int de()
{
	printf("DESIGN\n");
	printf("With support of digital solutions, simulation and real measurement data can be matched with each other during trials.\n This closes the gap between simulation and the real injection moulding processand also accelerates process optimisation.\n Furthermore the duration of the start-up phase will be reduced. \n");
	printf("Advantages of Digital Solutions in the Design & Construction of Plastic Parts\n");
	printf("- Increase the quality of the simulation.\n");
	printf("- Reduction of tool optimisation loops.\n");
	printf("- Reliable transfer to the machine.\n");
	printf("- Intelligent connection between development and production.\n");
	printf("\n");
}
	


int aut()
{
	printf("AUTOMATION\n");
	printf("Competence in injection moulding automation at all levels:\n From the injection moulding machine to the robot and conveyor systems to peripheral equipment.\n");
    printf("The Advantages of Our Injection Moulding Automation Solutions:\n");
    printf("- Wide range of products for injection moulding automation.\n");
    printf("- Make production process faster and more efficient.\n");
    printf("- Save time through fast set-up and commissioning.\n");
    printf("\n");
}

int imc()
{
	printf("INJECTION MOULDING COMPANY\n");
	printf("Injection moulding machines from 280 kN to 55,000 kN clamping force for all your requirements.\n Hydraulic, all-electric, hybrid, horizontal and vertical solutions of the highest quality.\n");
    
	int choice1;
    imc:
    printf("1.The fastest machine for plastic caps and closures\n");
    printf("\n");
    printf("2.The compact machine for near-standard applications\n");
    printf("\n");
    printf("3.The high-perpormance machine\n");
    printf("\n");
    printf("4.The compact tie bar less machine\n");
    printf("\n");
    printf("5.The special machine for rubber injection moulding\n");
    printf("\n");
    printf("6.exit");
    printf("\n");
    printf("Enter your Choice:");
    scanf("%d",&choice1);
    printf("\n");
    switch(choice1)
    {
        case 1: pcc();
                goto imc;
                break;
        case 2: nsa();
                 goto imc;
                 break;
        case 3: hpm();
                goto imc;
                break;
        case 4: ctlm();
        		goto imc;
                break;
        case 5: rim();
                goto imc;
                break;
        case 6:  exit(0);
        default: printf("choice doesn't exist\n");
        
        
    }
    
    
}
int pcc();
int nsa();
int hpm();
int ctlm();
int rim();

int pcc()
{
	printf("- Short cycle times\n");
	printf("- Low energy costs\n");
	printf("- Clean production\n");
	printf("- For caps and closures\n");
}

int nsa()
{
	printf("- Minimal footprint\n");
	printf("- Low energy consumption\n");
	printf("- Precise drives\n");
	printf("- Fast availability\n");
}

int hpm()
{
	printf("- Minimal power consumption\n");
	printf("- Clean production\n");
	printf("- Short cycle time\n");
	printf("- Ideal for packing and medical products\n");
}

int ctlm()
{
	printf("- Large mould area\n");
	printf("- Quick tool change\n");
	printf("- Fast availability\n");
	printf("- Easy integration of automation\n");
}

int rim()
{
	printf("- Developed for rubber O-rings and gaskets\n");
	printf("- Versatile solutions for material feed to suit material type\n");
	printf("- Compact design with small footprints\n");
}

int main ()
{
	printf("		___________________________\n");
	printf("		INJECTION MOULDING COMPANY \n");
	printf("			DEVELOPED BY: \n");
	printf("			PARIKH VISHVA \n");
	printf("\n");
	printf("			SUBJECT: ESFP-I\n");
	printf("			2022-23	\n");
	printf("		___________________________\n");

  char id[50];

  User:

  printf ("		Enter your id:	");
  scanf ("%s",&id);

  if (strcmp (id, "vishva") == 0)

    {

      printf ("		Id is correct\n");

    }

  else

    {

      printf ("		You have enetred an invalid user id\n		Please enter id again\n");

      goto User;

    }

  char pass[50];

pass:

  printf ("		Enter your password: ");
  scanf ("%s", &pass);

  if (strcmp (pass, "vishvap07") == 0)

    {

      printf("		You have successly logged in \n");
      printf("		___________________________\n");
      printf("\n");
      mainpage();

    }

  else

    {

      printf("		You have entered a wrong password\n		Enter your password again\n");

      goto pass;

    }

  return 0;

}
