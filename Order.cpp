#include "Order.h"

Order::Order(int id, ORD_TYPE r_Type)
{
	ID = (id>0&&id<1000)?id:0;	//1<ID<999
	type = r_Type;
	status = WAIT;
}

Order::~Order()
{
}

int Order::GetID()
{
	return ID;
}


ORD_TYPE Order::GetType() const
{
	return type;
}


void Order::SetDistance(int d)
{
	Distance = d>0?d:0;
}

int Order::GetDistance() const
{
	return Distance;
}


void Order::setStatus(ORD_STATUS s)
{
	status = s;
}

ORD_STATUS Order::getStatus() const
{
	return status;
}


void Order::SetArrTime(int t)
{
	if(t>0)
	ArrTime=t;
}
int Order::GetArrTime()const
{
return ArrTime;
}
void Order::SetServTime(int t)
{
    if(t>0)
	ServTime=t;
}
int Order::GetServTime()const
{
return ServTime;
}
void Order::SetFinishTime(int t)
{
     if(t>0)
	FinishTime=t;
}
int Order::GetFinishTime()const
{
return FinishTime;
}
void Order::SetOrder_Size(int s)
{
if(s>0)
	Order_Size=s;
}
int Order::GetOrder_Size()  const
{
	return Order_Size;
}
void Order::SetOrder_Price(double p)
{
if(p>0)
	Order_Price=p;
}
double Order::GetOrder_Price()  const
{
	return Order_Price;
}


