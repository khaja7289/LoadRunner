# PetStore Performance Testing with LoadRunner

## 📋 Project Overview

This project demonstrates comprehensive **performance and load testing** of the **PetStore e-commerce application** using **LoadRunner Professional 2022**. The project includes complete end-to-end testing workflows covering script development, scenario design, test execution, and detailed performance analysis with SLA validation.

### Key Objective
Validate system performance under realistic load conditions with 50 concurrent virtual users across 5 distinct business flows, ensuring the application meets defined SLA criteria.

---

## 📁 Project Structure

```
LoadRunner/
├── PetStore.lrs                      # Main scenario file (LoadRunner Controller)
├── PetStoreEndtoEndFlow/            # Main end-to-end flow script
│   ├── Login.c                      # User login transactions
│   ├── Registration.c               # New user registration
│   ├── AddToCard.c                  # Add product to shopping cart
│   ├── UpdateCart.c                 # Update cart quantity/items
│   ├── CheckOutThProduct.c          # Checkout transaction
│   ├── RemoveTheProduct.c           # Remove product from cart
│   ├── combined_PetStoreEndtoEndFlow.c  # Combined script
│   ├── data/                        # Test data files
│   ├── PetStoreEndtoEndFlow.prm     # Script parameters
│   └── result1/                     # Execution results
├── PetStoreS1/                      # Individual flow script 1
├── PetStoreS2/                      # Individual flow script 2
├── PetStoreS3/                      # Individual flow script 3
├── PetStoreS4/                      # Individual flow script 4
├── Analysis/                        # Test analysis & reports
│   ├── Report.htm                   # Main analysis report
│   ├── Analysis.html                # HTML analysis results
│   ├── Analysis.mdb                 # Analysis database
│   └── *.def, *.xml, *.js          # Configuration & visualization files
├── Report_Graph/                    # Generated performance graphs
│   ├── Trans Response Time.png      # Transaction response time chart
│   ├── Throughput.png               # System throughput chart
│   ├── Hits per Second.png          # Request rate chart
│   └── [12 total performance graphs]
└── README.md                        # This file
```

---

## 🔄 Business Flows (5 Key User Journeys)

The test scenario includes **5 critical business flows**, each simulating real user behavior:

| # | Flow Name | Description | Key Transactions |
|---|-----------|-------------|-------------------|
| 1 | **Registration & Login** | New user creation and authentication | Registration.c, Login.c |
| 2 | **Add to Cart** | Browse products and add to shopping cart | AddToCard.c |
| 3 | **Update Cart** | Modify cart quantities and items | UpdateCart.c |
| 4 | **Remove Product** | Remove items from shopping cart | RemoveTheProduct.c |
| 5 | **Checkout** | Complete purchase transaction | CheckOutThProduct.c |

**Note:** Each flow executes with new user credentials to simulate realistic user registration and login scenarios.

---

## ⚙️ Test Scenario Configuration

### Load Profile
- **Total Virtual Users (Vusers)**: 50
- **Load Distribution**: 10 Vusers per flow (20% each)
- **Ramp-up Strategy**: 1 Vuser per second
- **Steady State Duration**: 30 minutes
- **Ramp-down**: Gradual user reduction
- **Total Test Duration**: 33 minutes 35 seconds
- **Initial Delay**: 1 second per Vuser

### Script Configuration
- **Protocol**: HTTP/HTTPS
- **Recording Mode**: HTML-based (stateless recording)
- **Correlation**: Session IDs, authentication tokens, CSRF tokens
- **Parameterization**: 
  - Username & Password (from user credentials file)
  - Email addresses
  - Product IDs
  - Dynamic form fields
- **Think Time**: Added for realistic user behavior
- **Pacing**: Controlled request intervals

### SLA Rules Configured
- **Average Response Time**: < 3 seconds
- **90th Percentile Response Time**: < 5 seconds
- **Transaction Pass Rate**: > 99%
- **Error Rate**: < 1%

### Server Monitoring
- **Monitored Host**: Localhost
- **Performance Counters**:
  - CPU Utilization
  - Memory Usage
  - Disk I/O
  - Network Throughput

---

## 📊 Test Execution Results

### High-Level Summary
| Metric | Value |
|--------|-------|
| **Scenario Name** | PetStore |
| **Test Duration** | 33 minutes 35 seconds |
| **Peak Virtual Users** | 50 Vusers |
| **Total Transactions** | 31,713 (31,401 passed, 312 failed) |
| **Pass Rate** | **99%** ✅ |
| **Total Hits** | 66,493 |
| **Average Hits/Second** | 32.98 |

### Performance Metrics

#### Throughput Analysis
- **Total Data Transferred**: 306,599,233 bytes (~306 MB)
- **Average Throughput**: 152,082 B/s (~152 KB/s)
- **Peak Throughput**: [From Analysis.mdb]
- **Assessment**: Server handled moderate data load smoothly with consistent throughput

#### Transaction Performance
- **Total Transactions**: 31,713
  - ✅ Passed: 31,401 (99%)
  - ❌ Failed: 312 (1%)
- **Average Response Time**: Within SLA (<3 sec)
- **90th Percentile Response Time**: [From Analysis]

#### Hits & Requests
- **Total Hits**: 66,493
- **Avg Hits/sec**: 32.98
- **Peak Hits/sec**: [From Performance Graphs]

#### Error Analysis
- **Total Errors**: 312 transactions failed
- **Failure Rate**: ~1% (within acceptable range)
- **Common Error Types**: [Review error logs in Analysis folder]

### System Resource Utilization
- **CPU Utilization**: [Review graphs]
- **Memory Usage**: [Review graphs]
- **Disk I/O**: [Review graphs]
- **Network Bandwidth**: Consistent and stable

---

## 📈 Available Reports & Visualizations

### Analysis Report
- **Location**: [Analysis/Report.htm](Analysis/Report.htm)
- **Contents**: 
  - Transaction summary by flow
  - Response time breakdowns
  - Error analysis
  - SLA compliance status
  - Resource utilization trends

### Performance Graphs (Report_Graph/)
The following performance graphs are available:

1. **Trans Response Time** - Transaction response time trends
2. **Throughput** - System throughput over time
3. **Running Vusers** - Active user count progression
4. **Hits per Second** - Request rate analysis
5. **HTTP Responses per Second** - HTTP response rate
6. **Connections** - Active connection count
7. **Trans_Sec (Passed)** - Successful transaction rate
8. **Trans_Sec (Failed, Stopped)** - Failed/stopped transaction rate
9. **Total Trans_Sec (Passed)** - Cumulative transaction rate
10. **Vusers with Errors** - Error distribution across users
11. **Controller and Load Generator Resources** - System resource usage

**View All Graphs**: [Report_Graph/index.html](Report_Graph/index.html)

---

## 🚀 Getting Started

### Prerequisites
- **LoadRunner Professional** 2022.0.0.0 or later
- **Administrator privileges** on Windows machine
- **Target Application**: PetStore application (web server accessible)

### Steps to Run the Test

#### 1. Open the Scenario
```
File > Open > PetStore.lrs
```

#### 2. Verify Configuration
- Check assigned Vuser distribution in Controller
- Verify host connectivity and monitoring settings
- Review script compilation for errors

#### 3. Execute the Test
```
Scenario > Run > Start
```

#### 4. Monitor During Execution
- Watch real-time graphs in Controller
- Monitor server resources
- Review ongoing transaction status

#### 5. Analyze Results
- Generate analysis report
- Compare against SLA thresholds
- Export graphs and metrics

---

## 📋 Script Details

### PetStoreEndtoEndFlow
**Primary script** covering complete user journeys:
- User Registration
- User Login
- Product Browsing & Selection
- Add to Cart
- Update Cart
- Checkout Process
- Clean-up/Logout

### Individual Flow Scripts (PetStoreS1-S4)
Specialized scripts for specific flows:
- Each focuses on a particular business process
- Includes parameterized test data
- Configured for correlation and dynamic values

---

## ✅ Test Results Analysis

### Strengths
- **High Pass Rate**: 99% transaction success indicates robust application
- **Consistent Throughput**: Stable 152 KB/s suggests scalable infrastructure
- **Low Error Rate**: Only 1% failures within acceptable tolerance
- **SLA Compliance**: Average response time meets <3 sec requirement

### Areas for Review
- **312 Failed Transactions**: Investigate failure patterns
  - Transient issues vs. systematic failures
  - Specific transactions with higher error rates
  - User credential validation issues

### Recommendations
1. **Review Failed Transactions**: Analyze error logs in Analysis folder to identify root causes
2. **Scale Testing**: Test with higher loads (100-200 Vusers) to identify breaking points
3. **Stress Testing**: Gradually increase load until system degradation observed
4. **Endurance Testing**: Run longer duration tests to identify memory leaks
5. **Peak Load Analysis**: Test during business peak hours with realistic data
6. **Database Performance**: Monitor database server metrics during test
7. **Network Analysis**: Review network latency and bandwidth utilization

---

## 🔧 Customization Guide

### Modify Load Profile
1. Open **PetStore.lrs** in Controller
2. Right-click script group → **Properties**
3. Adjust **Vuser count** and **ramp-up** settings
4. Update **duration** as needed

### Add New Transactions
1. Open script in **VuGen**
2. Record new transaction
3. Add correlation/parameterization
4. Recompile and add to scenario

### Update SLA Rules
1. **Scenario** → **SLA Rules**
2. Modify thresholds for:
   - Response time
   - Transaction rate
   - Error count
3. Apply and re-run

---

## 📖 Key Files Overview

| File/Folder | Purpose |
|-------------|---------|
| `PetStore.lrs` | Main Controller scenario file |
| `PetStoreEndtoEndFlow/` | Primary test script |
| `PetStoreS[1-4]/` | Individual flow scripts |
| `Analysis/Report.htm` | Detailed performance report |
| `Report_Graph/` | Visual performance metrics |
| `*.prm` | Parameter files for test data |
| `*.usr` | User data files |
| `globals.h` | Global variables & definitions |

---

## 📞 Support & Documentation

- **LoadRunner Official Docs**: [HP/Micro Focus Documentation](https://admhelp.microfocus.com/lr/en/latest/Content/LR_Welcome.htm)
- **Performance Testing Best Practices**: Review analysis report for detailed metrics
- **Error Logs**: Check `Analysis/` folder for detailed error information

---

## 📝 Test Execution Log

- **Last Test Run**: [Review ReplaySummaryReport.xml in PetStoreEndtoEndFlow/]
- **Test Status**: ✅ Completed Successfully
- **SLA Status**: Mostly Compliant
- **Key Finding**: 99% pass rate with 50 concurrent users

---

## 🎯 Conclusion

The PetStore application demonstrates **solid performance** under the tested load conditions (50 Vusers). The 99% transaction pass rate and consistent throughput indicate a well-configured system. Further testing with higher loads is recommended to identify performance thresholds and optimize system capacity.

**Overall Assessment**: ✅ **PASS** - System meets defined performance requirements
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
