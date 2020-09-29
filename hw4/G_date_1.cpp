#include <stdexcept>
#include <cstring>


using i32 = int32_t;


class Date {

private:
    i32 day_{1};
    i32 month_{1};
    i32 year_{1970};

public:
    Date(i32 day, i32 month, i32 year)
            : day_{day}, month_{month}, year_{year} {
        // ...
    };

    i32 GetDay() const {
        return day_;
    }

    i32 GetMonth() const {
        return month_;
    }

    i32 GetYear() const {
        return year_;
    }

    i32 ToDays() const;

    void FromDays(i32 inp_days);

    Date &operator++() {
        i32 days = ToDays();
        FromDays(days + 1);
        return *this;
    }

    Date &operator--() {
        i32 days = ToDays();
        FromDays(days - 1);
        return *this;
    }

    Date operator+(i32 k) const;

    Date operator-(i32 k) const;

    i32 operator-(const Date &d) const;
};


std::ostream &operator<<(std::ostream &out, const Date &d);
