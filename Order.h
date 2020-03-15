#ifndef __ORDER_H_
#define __ORDER_H_

#include "..\Defs.h"

class Order
{

protected:
	int ID;         //Each order has a unique ID (from 1 --> 999 )
	ORD_TYPE type;		//order type: Normal, vegan, VIP
	ORD_STATUS status;	//waiting, in-service, done
	int Distance;	//The distance (in meters) between the order location and the resturant 
	                
	double totalMoney;	//Total order money

	int ArrTime, ServTime, FinishTime;	//arrival, service start, and finish times
	int Order_Size;
	double Order_Price;
	
	//
	// TODO: Add More Data Members As Needed
	//

public:
	Order(int ID, ORD_TYPE r_Type);
	virtual ~Order();

	int GetID();

	ORD_TYPE GetType() const;

	void SetDistance(int d);
	int GetDistance() const;

	void setStatus(ORD_STATUS s);
	ORD_STATUS getStatus() const;
	
	void SetArrTime(int t);
	int GetArrTime()const;

	void SetServTime(int t);
	int GetServTime()const;

	void SetFinishTime(int t);
	int GetFinishTime()const;

	void SetOrder_Size(int s);
	int GetOrder_Size()const;

	void SetOrder_Price(double p);
	double GetOrder_Price()const;


	
		
	//
	// TODO: Add More Member Functions As Needed
	//

};

#endif