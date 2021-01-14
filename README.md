# Ranking-ML-Feature-Selection
Rank and visualize machine learning and feature selection approaches on Software Fault and Maintenance Effort

LANGUAGES USED:- Python,C++

LIBRARY USED:- Pandas, Scipy, Pickle , Numpy

PLATFORM USED:- MS EXCEL

STEPS:-
1) Run the  find_signature.py
2) Run new_enron_feature.py
3) Run poi_flag_email.py
4) finally for the visualization run visualize_new_feature.py

No need to set any environment variable

DATASET DESCRIPTION

We have used following ten open source datasets for our research:-
ant1.7, camel1.6, jEdit4.3, log4j1.2, lucene2.4, poi3.0, synapse1.2, velocity1.6.1, xalan2.7.0, xerces1.4.4

Each dataset has 21 attributes which include both class size attributes and object oriented attributes as described below:-

WMC:-Weighted Methods per Class

DIT:-Depth of Inheritance Tree

NOC:-Number of Children

CBO:-Coupling Between Object classes

RFC:-Response for a Class

LCOM:-Lack of Cohesion in Methods

LCOM3:-Lack of Cohesion in Methods, different from LCOM

NPM:-Number of Public Methods

DAM:-Data Access Metric

MOA:-Measure of Aggregation

MFA:-Measure of Function Abstraction

CAM:-Cohesion among Methods of class

IC:-Inheritance Coupling

CBM:-Coupling Between Methods

AMC:-Average Method Complexity

Ca:-Afferent couplings

Ce:-Efferent couplings

Max_CC:-Maximum McCabe’s Cyclomatic Complexity values of methods in the same  class

Avg_CC:-Mean McCabe’s Cyclomatic Complexity values of methods in the same class

LOC:-Lines of Code

Bug:-Number of bugs detected in the class

FEATURE SELECTION METHODS

In general, some features or datasets of various datasets can result in misleading accuracy of the prediction models because some attributes may be redundant, irrelevant as one of them may be correlated to the other one, so it is important to remove these datasets from our dataset before evaluating the machine learning algorithms. This can be accomplished by using feature selection methods. The aim of feature selection is to select a combination of features which would improve performance over selecting all features. We have used following seven feature selection in Weka which is open source data mining software as shown in the table along with the description of each method:-

1.CfsSubsetEval:-Subsets of features that are highly correlated with the class while having low correlation with each other are preferred

2.CorrelationAttributeEval:-Evaluates the worth of an attribute by measuring the correlation between it and the class

3.GainRatioAttributeEval:-Evaluates the worth of an attribute by measuring the gain ratio with respect to the class

4.InfoGainAttributeEval:-Evaluates the worth of an attribute by measuring the information gain with respect to the class

5.OneRAttributeEval:-Evaluates the worth of an attribute by using the OneR classifier

6.ReliefFAttributeEval:-Evaluates the worth of an attribute by repeatedly sampling an instance and considering the value of the given attribute for the nearest instance of the same and different class

7.SymmetricalUncertAttributeEval	  Evaluates the worth of an attribute by measuring the symmetrical uncertainty with respect to the class

MACHINE LEARNING METHODS

1)Linear Regression

2)Multi Layer Perceptron

3)Support Vector Machine Regression

4)Decision Tree

5)K Nearest Neighbours 

6)M5P Tree

7)Gaussian Process

