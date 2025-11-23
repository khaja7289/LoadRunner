#  PetStore Performance Testing with LoadRunner

##  Overview
This project demonstrates **performance testing** of the PetStore application using **LoadRunner Professional**. It covers end-to-end steps:
- Script creation in **VuGen**
- Scenario design in **Controller**
- Test execution and **Analysis**
- SLA validation and reporting

---

##  Project Flows
We have **5 key business flows**:
every time we are login with new user like rigister and login register user every time 
1.Add to cart
2.Update Add to cart
3.Remove Product
4.Checkout
5.Register and Login and Logout

---

##  Step 1: Script Creation (VuGen)
- **Protocol**: HTTP/HTTPS
- **Recording Mode**: HTML-based
- Parameterization for dynamic data:
  - Username, Password, Email
- Correlation for session IDs and tokens
- Think time and pacing added for realistic behavior

---

##  Step 2: Controller Scenario Design
- **Total Vusers**: 50
- **Load Distribution**: 20% per flow (10 Vusers each)
- **Ramp-up/down**: 1 Vuser every 1 second
- **Initial Delay**: 1 second per Vuser
- **Duration**: 30 min steady state
- **SLA Rules**:
  - Avg Response Time < 3 sec


**Monitors Configured**:
- Localhost added as monitored host
- Windows Resource Monitor enabled (CPU, Memory, Disk)

---

##  Step 3: Analysis & Reporting
After execution:
- Review **Transaction Response Time**, **Throughput**, **Error Rate**
- Check **Memory & CPU Utilization**
- Compare results against SLA
- Export graphs:
  - Response Time
  - Throughput
  - Memory Utilization

---

##  CI/CD Integration (Optional)
- Trigger tests via **LoadRunner Cloud API** or Jenkins pipeline
- Auto-generate reports and graphs (.jpg)
- Publish artifacts for team review

---
Report Graphs
https://github.com/khaja7289/LoadRunner/blob/main/Report_Graph/index.html

Analysis Report:
https://github.com/khaja7289/LoadRunner/blob/main/Analysis/Report.htm

## Analysis Summery

 High-Level Test Summary
 Scenario Name: PetStore
 Total Test Duration: 33 minutes 35 seconds
 Max Virtual Users (Vusers): 50
 SLA Status: Defined (and most SLAs met)
 Overall System Performance
1. Throughput

Total Throughput: 306,599,233 bytes (~306 MB)

Average Throughput: 152,082 B/s (~152 KB/s)

 This means the server handled a moderate data load smoothly.

 Hits & Requests

Total Hits: 66,493

Average Hits/sec: 32.98

Passed Transaction Ratio: ~99% (excellent)

 Transaction Summary
Metric	Value
Total Transactions	31,401 passed, 312 failed
Pass %	99%
Failed %	1%
Stopped	0

 99% success rate indicates good application stability under load.
Final Conclusion

Application is stable under a load of 50 Vusers
SLA passed for critical transactions
Response times are consistently under 1 second
Very few failures (1%) – acceptable for load test
No signs of bottlenecks like spikes, timeouts, or server failures

## HTTP Response Code Summary
- HTTP Status Code	Count	Requests/sec	Interpretation
- 200 (Success)	60,803	30.16/sec	Majority of requests were successfully processed by the server.
- 302 (Redirect)	5,534	2.745/sec	Expected redirects (login flow, auth, dynamic pages). Not an issue unless excessive.
- 500 (Server Error)	156	0.077/sec	Indicates internal server failure. Needs investigation.

1. Server-Side Failures (HTTP 500 – 156 occurrences)
These represent server exceptions or application logic failures.
Even though the error rate is relatively small, any HTTP 500 is a reliability risk.

## Possible causes:

- Database connection issues
- API gateway throttling
- Application unhandled exception
