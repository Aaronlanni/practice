#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
    //思路：定义一个起始日期，如果日期合法，发返回，否则返回-1；

    Date(int year = 2017, int month = 9, int day = 10)//构造函数
        : _year(year)  //初始化列表
        , _month(month)
        , _day(day)
    {}

    Date(const Date& d)//拷贝构造函数
    {
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }

    //获得某月的天数
    int Getmonthday(int _year, int _month)
    {
        //闰年
        if (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0))
        {
            if (_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12)
            {
                return 31;
            }
            else if (_month == 2)
            {
                return 29;
            }
            else
            {
                return 30;
            }
        }
        else//平年
        {
            if (_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12)
            {
                return 31;
            }
            else if (_month == 2)
            {
                return 28;
            }
            else
            {
                return 30;
            }
        }
    }

    //判断日期是否合法 
    bool IsInvalid(int year, int month, int day)//判断日期是否合法
    {
    //此处从1900年开始，如果小于这个日期，则返回fasle
        return ((year > 1900) && (month > 0) && (month<13) && (day>0) && (day < Getmonthday(year, month)));
    }

    Date& operator=(const Date& d)
    {
        if (*this != d)
        {
            _year = d._year;
            _month = d._month;
            _day = d._day;
        }
        return *this;
    }

    //// 前置++ 分情况(方法一）
    //Date& operator++()
    //{
    //  if (_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12)
    //  {
    //      if (_day < 31)
    //      {
    //          _day += 1;
    //      }
    //      else
    //      {
    //          if (_month < 12)
    //          {
    //              _month += 1;
    //              _day = 1;
    //          }
    //          else
    //          {
    //              _year += 1;
    //              _month = 1;
    //              _day = 1;
    //          }
    //      }
    //  }

    //  else if (_month == 4 || _month == 6 || _month == 9 || _month == 11)
    //  {
    //      if (_day < 30)
    //      {
    //          _day += 1;
    //      }
    //      else
    //      {
    //              _month += 1;
    //              _day = 1;
    //      }
    //  }
    //  //判断是否是闰年
    //  else
    //  {
    //      if (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0))
    //      {
    //          if (_day < 29)
    //          {
    //              _day += 1;
    //          }
    //          else
    //          {
    //              _month += 1;
    //              _day = 1;
    //          }
    //      }
    //      else
    //      {
    //          if (_day < 28)
    //          {
    //              _day += 1;
    //          }
    //          else
    //          {
    //              _month += 1;
    //              _day = 1;
    //          }
    //      }
    //  }
    //  return *this;
    //}

    //方法二：前置++
    Date operator++()
    {
        _day += 1;
        if (_day > Getmonthday(_year, _month))//当加一天之后，这个天数大于这个月的标准天数，才向下一个月进一位
        {
            ++_month;
            _day = 1;
            if (_month > 12)//如果月进完之后，加完之后的月大于12，则要向年进位
            {
                ++_year;
                _month = 1;
                _day = 1;
            }
        }
        return *this;
    }


    // 后置++ 返回值中day的天数不能变
    Date operator++(int)
    {
        Date tmp(*this);//保存当前对象
        ++tmp;
        //tmp._day += 1;
        return *this;
    }


    //方法一：前置--
    //Date& operator--()
    //{
    //  switch (_month)
    //  {
    //  case 5:
    //  case 7:
    //  case 8:
    //  case 10:
    //  case 12:
    //      if (_day > 1)
    //      {
    //          _day -= 1;
    //      }
    //      else
    //      {
    //          _month -= 1;
    //          _day = 30;
    //      }
    //      break;
    //  case 4:
    //  case 6:
    //  case 9:
    //  case 11:
    //      if (_day > 1)
    //      {
    //          _day -= 1;
    //      }
    //      else
    //      {
    //          _month -= 1;
    //          _day = 31;
    //      }
    //      break;
    //  case 1:
    //      if (_day > 1)
    //      {
    //          _day -= 1;
    //      }
    //      else
    //      {
    //          _year -= 1;
    //          _month = 12;
    //          _day = 31;
    //      }
    //      break;
    //  case 3:
    //      if (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0))//闰年
    //      {
    //          if (_day > 1)
    //          {
    //              _day -= 1;
    //          }
    //          else
    //          {
    //              _month -= 1;
    //              _day = 29;
    //          }
    //      }
    //      else
    //      {
    //          if (_day > 1)
    //          {
    //              _day -= 1;
    //          }
    //          else
    //          {
    //              _month -= 1;
    //              _day = 28;
    //          }
    //      }
    //      break;
    //  case 2:
    //      if (_day > 1)
    //      {
    //          _day -= 1;
    //      }
    //      else
    //      {
    //          _month -= 1;
    //          _day = 31;
    //      }
    //      break;
    //  }
    //  return*this;
    //}


    //方法二：前置--
    Date operator--()
    {
        _day -= 1;
        if (_day == 0)
        {
            --_month;
            _day = Getmonthday(_year, _month);
            if (_month == 0)
            {
                --_year;
                _month = 12;
                _day = 31;
            }
        }
        return* this;
    }

    Date operator--(int)
    {
        Date tmp(*this);//保存当前对象
        --tmp;
        //tmp._day -= 1;
        return *this;
    }

    //days天之后的日期 
    Date operator+(int day)
    {
        if (day < 0)
        {
            return *this - (-day);
        }
        _day += day;
        while (_day>Getmonthday(_year, _month))//当当前加上的天数，大于合法的日期，则要要下一个月进位
        {
            _day = _day - Getmonthday(_year, _month);//这块得到的天数，亦指本月已加满的天数
            ++_month;
            if (_month > 12)//如果加上的天数，超过一年，则需要年进位
            {
                ++_year;
                _month = 1;
            }
        }
        return *this;
    }

    // days天之前的日期 
    Date operator-(int days)
    {
        if (days < 0)
        {
            return *this + (-days);//需要减的天数，如果小于0，则相当于加上某些天
        }
        _day -= days;
        while (_day < 0)//当减去之后，这个数小于0，则需要向上一个月借
        {
            --_month;
            if (_month == 0)//如果借完之后，_month == 0，则需要向上一年借
            {
                --_year;
                _month = 12;
            }
            _day = Getmonthday(_year, _month)+days;//此时的days相当于减了之后的days
        }
        return*this;
    }




    int operator-(const Date& d)//计算两个日期之间差了多少天
    {
        int count = 0;
        Date big;//定义一个大日期
        Date small;//定义一个小日期
        if (operator<(d))//定义一个大小日期，用小日期一天一天的加，直到等于大的日期，计算中间加了多少天，返回那个较小的日期
                    //机制：d与this指针相比 即d._year<_year...等
            {
                big = *this;
                small = d;
            }
        else
            {
                big = d;
                small = *this;
            }
        while (small != big)
            {
                small.operator++();
                count++;//让小的那个天数，一天天的加，直到两个相等为止
            }
        return count;//返回加的天数
    }

    bool operator==(const Date& d)const
    {
        if ((_year == d._year) && (_month == d._month) && (_day == d._day))
        {
            return true;//相等
        }
        else
            return false;
    }

    bool operator!=(const Date& d)const 
    {
        //法一：
        //if ((_year != d._year) || (_month != d._month) || (_day != d._day))
        //{
        //  return true;//不相等
        //}
        //else
        //return false;

        //法二：
        return !(*this == d);
    }

    bool operator>(const Date& d)const
    {
        if ((d._year > _year) || (d._month > _month) || (d._day > _day))
        {
            return true;
        }
        else
            return false;
    }

    bool operator<(const Date& d)const
    {
        if ((d._year < _year) || (d._month < _month) || (d._day < _day))
        {
            return true;
        }
        else
            return false;
    }

    void PrintData()
    {
        cout << _year << "  " << _month << "  " << _day<<endl;
    }

    ~Date()//调用析构函数
    {}

private:
    int _year;
    int _month;
    int _day;
};
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257
258
259
260
261
262
263
264
265
266
267
268
269
270
271
272
273
274
275
276
277
278
279
280
281
282
283
284
285
286
287
288
289
290
291
292
293
294
295
296
297
298
299
300
301
302
303
304
305
306
307
308
309
310
311
312
313
314
315
316
317
318
319
320
321
322
323
324
325
326
327
328
329
330
331
332
333
334
335
336
337
338
339
340
341
342
343
344
345
346
347
348
349
350
351
352
353
354
355
356
357
358
359
360
361
362
363
364
365
366
367
368
369
370
371
372
373
374
375
376
377
378
379
380
381
382
383
384
385
386
387
388
389
390
391
392
393
394
395
396
397
398
399
400
401
402
403
404
405
406
407
408
409
410
411
412
413
414
下面将是测试代码：

int main()
{
    Date d1;
    Date d2(2017, 9,23);
    Date d3(2017, 1, 1);
    Date d4(2017, 9, 30);
    Date d5(d1);//调用拷贝构造函数

    d1.operator+(600);
    d1.PrintData();

    d2.Getmonthday(2018,10);
    d2.PrintData();

    d3.IsInvalid(2017,1,36);
    d3.PrintData();

    d4.operator++();
    d4.PrintData();

    d3.operator++(1);
    d3.PrintData();

    d3.operator--();
    d3.PrintData();

    d3.operator--(1);
    d3.PrintData();

    d4.operator<(d3);
    d4.PrintData();

    d2.operator=(d2);
    d2.PrintData();

    d2.operator==(d4);
    d2.PrintData();

    d1.operator>(d2);
    d1.PrintData();

    d1.operator!=(d3);
    d1.PrintData();

    system("pause");
    return 0;
}