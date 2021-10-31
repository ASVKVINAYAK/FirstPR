# House Price Prediction Model using Regression
This ipynb notebook contain an regression model to predict house price using the data set which is used to train the model. The dataset used is also provided.

## Technologies
The library and tools used in creating the Notebook are :
```
* Turicreate Libray
* Jupyter notebook
* Ubuntu WSL (For using and install library in Windows)
```
* Turi Create is an open-source toolset that simplifies the development of machine learning models including, image classification, object detection, recommendations and more.
* Unfortunately, there’s no direct way to install Turi Create on Windows 10. So we will have to use a Windows subsystem for Linux (WSL).

## Setup

### Install Windows Subsystem for Linux (WSL)
1. Open Powershell as Administrators and run the following command:
```
Enable-WindowsOptionalFeature -Online -FeatureName Microsoft-Windows-Subsystem-Linux
```
2. When prompted, restart your computer.
3. Launch the Microsoft Store and search for Linux. Select the Linux distribution of your choice. For this tutorial, we are using the Ubuntu 18.04 LTS distro.
4. From the distro’s page, select get, and install.
5. Launch the distro from the Start menu or by clicking the “launch” button on Microsft Store.
6. You will have to initialize your new distro. Follow the prompts to set up a new Linux account (username and password). You will need your password later when installing packages using sudo.
7. Update and upgrade your distros packages. This will take a few minutes.
```
sudo apt update && sudo apt upgrade
```
### Install and setup virtualenv
1. Install dependencies:
```
sudo apt-get install -y libstdc++6 python-setuptools
sudo apt-get install python3-pip
```
2. Install virtualenv using pip3:
```
sudo pip3 install virtualenv 
```
3. Create a new virtual environment:
```
virtualenv venv
```
4. Activate your virtual environment:
```
source venv/bin/activate
```
### Install Jupyter Notebook in your Virtualenv
1. Install jupyter notebook in your virtual environment:
```
pip3 install jupyter
```
2. To test your installation of both, open Jupiter notebook:
```
jupyter notebook
```
### Install Turi Create in your virtual environment
1. Make sure you are still in your virtual environment (venv). Install turicreate using the following script:
```
pip3 install turicreate
```
2. Create a new python file in your notebook, and type and run the following line of code to test your turicreate installation. If you don’t get an error message, it means your installation was successful.
```
import turicreate as tc
```