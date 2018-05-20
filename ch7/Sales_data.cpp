#include <iostream>
#include "Sales_data.h"

Sales_data::Sales_data()
{
    this->bookNo = "";
    this->units_sold = 0;
    this->revenue = 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data Sales_data::add(Sales_data& item)
{
    Sales_data temp;
    if(this->bookNo == item.bookNo)
    {
        temp.units_sold = this->units_sold + item.units_sold;
        temp.revenue = this->revenue + item.revenue;
    }
    return temp;
}

std::istream& Sales_data::read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}

std::ostream& Sales_data::print(std::ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << " " 
        << item.revenue/item.units_sold;
    return os;
}

inline double Sales_data::avg_price()
{
    return this->revenue / this->units_sold;
}