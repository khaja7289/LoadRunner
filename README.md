# 🐾 PetStore Performance Testing with LoadRunner

## 📌 Overview
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

## 🛠 Step 1: Script Creation (VuGen)
- **Protocol**: HTTP/HTTPS
- **Recording Mode**: HTML-based
- Parameterization for dynamic data:
  - Username, Password, Email
- Correlation for session IDs and tokens
- Think time and pacing added for realistic behavior

---

## 🧩 Step 2: Controller Scenario Design
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

## 📊 Step 3: Analysis & Reporting
After execution:
- Review **Transaction Response Time**, **Throughput**, **Error Rate**
- Check **Memory & CPU Utilization**
- Compare results against SLA
- Export graphs:
  - Response Time
  - Throughput
  - Memory Utilization

---

## 🚀 CI/CD Integration (Optional)
- Trigger tests via **LoadRunner Cloud API** or Jenkins pipeline
- Auto-generate reports and graphs (.jpg)
- Publish artifacts for team review

---
Report Graphs
https://github.com/khaja7289/LoadRunner/blob/main/Report_Graph/index.html
