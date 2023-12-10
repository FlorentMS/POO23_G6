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

