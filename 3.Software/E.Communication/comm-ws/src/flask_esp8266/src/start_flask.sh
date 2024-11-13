# download
sudo apt-get update
sudo apt-get install -y python3-pip
echo "alias python=python3" >> ~/.bashrc
source ~/.bashrc
pip install Flask
sudo apt-get --reinstall install python3-requests

python app.py