# Projet_POO_Groupe6

## Presentation
This project is a Client/Server application to manage a socity of electronique components. It is made with an architecture services/Components. This version is a first one, so there are still some issues or case with out prevent reaction for exeptions.  
The application offer the possibility to display all employees, customers, orders made and products in stock. But in search section you can specify one occurence to display only one, for this one you have to option in order : you can see all items in the order, or all means of payment in case of multiple payments. You can add or change an employee, a customers or a product, order and for change an order their is three part in facts, the first on to change information like the date of delivery ..., another one to add an items to an order and the last one to do same thing with payment methode.
You have in additionnal a statistic part where you can choose to see some data on your sell on customers ... And a link part with a simulation for the stock market value in fonction of a TVA, discount ...



## Architecture 
The architecture is divised in three parts with an only interface make of several Tab which allow to have a separation beetween all fonctionnalities of the application.  

  
> **HCI** (Human-Computing Interaction)  
> &nbsp;&nbsp;&nbsp; FormEmployees, FormCustomers, FormOrder, FormStock FormStatistic, FormSimulation 


> **Services**  
> &nbsp;&nbsp;&nbsp; CLemployees / CLcustomers / CLorders / CLstock / CLstatistics / CLsimulations  


> **Components**  
> >**of mapping**  
> >&nbsp;&nbsp;&nbsp; CLmapEMP/ CLmapCUST / CLmapORDER / CLmpaPRODUCT / CLmapSTAT / CLcalculSIMU
>
> >**of connexion**  
> >&nbsp;&nbsp;&nbsp; CLcad  

## Diagrammes
### Use case diagrams :
![usecase1](https://github.com/FlorentMS/POO23_G6/assets/150123348/adfd4812-b9de-4ea4-9132-1d59df65e22f)

![usecase2](https://github.com/FlorentMS/POO23_G6/assets/150123348/ea67fdb1-9ede-4c76-b13a-d369d02b8c61)

### Class diagram :
![classdiagram](https://github.com/FlorentMS/POO23_G6/assets/150123348/9edf6fa1-436a-445f-8dba-6f7ac1a3523f)
![ihmclasses](https://github.com/FlorentMS/POO23_G6/assets/150123348/d1f1b272-89b0-4f8f-8157-5967461c436e)
![svcclasses](https://github.com/FlorentMS/POO23_G6/assets/150123348/fa51976f-3fc0-4b88-8cb9-22f5d9e2daf0)
![compclasses](https://github.com/FlorentMS/POO23_G6/assets/150123348/b94554c2-b767-4b60-ac54-400439ebd460)
![clcadclasses](https://github.com/FlorentMS/POO23_G6/assets/150123348/f603d697-6f0c-466d-bef1-350235dd90ab)

### Sequence diagrams :
![sequence diagram](https://github.com/FlorentMS/POO23_G6/assets/150123348/a3b36773-604a-439b-b146-1583c3fc1374)
![sequencediagram2](https://github.com/FlorentMS/POO23_G6/assets/150123348/62e8ac2a-6506-4e14-914e-98ce2d3fe956)

### Activity diagrams :
![image](https://github.com/FlorentMS/POO23_G6/assets/150123348/63902f3c-8148-452a-b91a-5f1a9cf85154)
![activiteclient](https://github.com/FlorentMS/POO23_G6/assets/150123348/0870dfab-40f9-4944-be3e-39b3a97a388d)
![activitécommande](https://github.com/FlorentMS/POO23_G6/assets/150123348/3b0066e3-f7a9-4f6b-bc86-1017b4f8311e)
![activitépersonnel](https://github.com/FlorentMS/POO23_G6/assets/150123348/d0e9fdff-60e8-4b5d-abfa-f23f9a6ce151)
![activitéstock](https://github.com/FlorentMS/POO23_G6/assets/150123348/a98289be-a5dd-49a5-b657-6210433b29c2)

## Data Base :
### CDM :
![image](https://github.com/FlorentMS/POO23_G6/assets/150123348/0d9b3acc-1cae-44fa-bb6e-2f9997ee1ca7)
### LDM :
![image](https://github.com/FlorentMS/POO23_G6/assets/150123348/c016c914-6e03-4984-9388-f516095b9b25)

