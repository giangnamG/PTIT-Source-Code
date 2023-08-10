import requests
from bs4 import BeautifulSoup
from unidecode import unidecode
import os

class Search:
    
    def __init__(self):
        self.QuestionCodesInWebSite = []
        self.count = 0  
    
    def convert_to_ascii(self,text):
        return unidecode(text)
    
    def CrawQuestionCode(self,page):  
        burp0_url = f"https://code.ptit.edu.vn:443/student/question?page={page}"
        burp0_cookies = {"_ga_MRZBEE26NG": "GS1.1.1633912882.1.0.1633912997.0", "ozi": "2000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QfMpxT9GHDDyXxopsLOCc7o5lhpRMmdSVeg_yz9O3jfrYhF-D0.1", "_ga": "GA1.1.836918944.1633912882", "__zi": "3000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QvMpxTDGHDDzXV7zb1v7qpJ1zVsH4aITDCFoifWHGvi_m_w_D0.1", "_ga_YJ08BVKT4Q": "GS1.1.1689226527.8.1.1689226548.0.0.0", "XSRF-TOKEN": "eyJpdiI6Ik9DckNPby9WM0ZxeE1xcDBqS2R4cnc9PSIsInZhbHVlIjoicUxuaXZLanhaTEkwQjdTanJoV0p5bXZhTGFXL2FwbkQ1cytnR3c5d2hFdm4weVZIdVlHODdlckV0RFVIcUNqdi9ZTktTMk5xU2htTXVwRVJiSXlIODdNTVZ4NHE5VzVTZnl6UzlPTmNoRnFPOW56d3BzcDgwMUNBMGNZMnVEVG8iLCJtYWMiOiJjYTgyNWJmNzFhZTM1ODdiMDhmOTliNDdlZTMzMWJhYTJiYWVhYTNkNjIzNTlkYTJhZmNkNTIyNTBjNmZlZjQ1IiwidGFnIjoiIn0%3D", "ptit_code_session": "eyJpdiI6IkJpK0NzRk40YnBycDc5YnkxM1hQdmc9PSIsInZhbHVlIjoicGVZMFBuKzVTelhPU0Fjb0p2aWFHcXJBcFpIY2t1NU1mMkVyVkZMODBMNG5NN29BckJVeXdZd3ZZcXlvN3QybUdWVmZxTWQyQThtSkxMdzFxRVZNMXJ1cFpUZ1VjWkp6V0FwNGtsOHJsRVlsVVV2Q3VuYnp5bjE2STNsSWcwOE0iLCJtYWMiOiI2YjA3YTc0OWFkYzA4YmNmYTljODRlMTJkODBiYjg0Njg2YWUxOWY2NTk0YzU5NjM2OTkyMjA3NDFlOWI2N2U3IiwidGFnIjoiIn0%3D"}
        burp0_headers = {"Cache-Control": "max-age=0", "Sec-Ch-Ua": "\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Microsoft Edge\";v=\"114\"", "Sec-Ch-Ua-Mobile": "?0", "Sec-Ch-Ua-Platform": "\"Windows\"", "Upgrade-Insecure-Requests": "1", "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36 Edg/114.0.1823.82", "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7", "Sec-Fetch-Site": "none", "Sec-Fetch-Mode": "navigate", "Sec-Fetch-User": "?1", "Sec-Fetch-Dest": "document", "Accept-Encoding": "gzip, deflate", "Accept-Language": "vi,en-US;q=0.9,en;q=0.8"}
        res = requests.get(burp0_url, headers=burp0_headers, cookies=burp0_cookies)

        soup = BeautifulSoup(res.content, 'html.parser')
        tbody = soup.find('tbody')
        rows = tbody.find_all('tr')
        for row in rows:
            self.count += 1
            td = row.find_all('td')
            QuestionCode = td[2].find('a').text.strip()
            QuestionName = self.convert_to_ascii(td[3].find('a').text.strip())
            self.QuestionCodesInWebSite.append({"QuestionName" : QuestionName,"QuestionCode" : QuestionCode})
            print({"QuestionName" : QuestionName,"QuestionCode" : QuestionCode})
            with open('CrawlTitles.txt', 'a+') as f:
                f.write(f"{QuestionCode}-{QuestionName}\n")
                f.close()
    
    def check_file_exists(self,file_path):
        return os.path.exists(file_path)
    
    def setup(self):
        for _ in range(1,5):
            self.QuestionCodesInWebSite = []  
            self.CrawQuestionCode(_)
    
    def search(self, _input):
        res = []
        for _ in self.titles:
            if _input.upper() in _.upper():
                res.append(_)
        return res
    def get_file_exists_in_src_code(self, file_code):
        files = os.listdir('code')
        for _ in files:
            if file_code in _.upper():
                return _
        return None

    def main(self):
        if self.check_file_exists('./CrawlTitles.txt'):
            with open('CrawlTitles.txt', 'a+') as f:
                f.seek(0)  # Move the file pointer to the beginning
                self.titles = f.readlines()
                f.close()
            while True:
                search = input("Enter your question name or code name or quit(q): ").strip()
                search = self.convert_to_ascii(search)
                if search == 'q':
                    break
                else:
                    files = self.search(search)
                    print(f"your results:")
                    for file in files:
                        print(file.replace('\n',''))
                        file_in_src = self.get_file_exists_in_src_code("".join(file.upper().split('-')[0]))
                        if file_in_src != None:
                            print(f"=> Found file {file_in_src} in source code\n")
                        else:
                            print("=> Not Found this file in source code\n")
                    
        else:
            print("File 'CrawlTitles.txt' does not exist, you must change 'burp0_cookies', 'burp0_headers' and call 'setup()' function!")
            self.setup()
            print(f'total: {self.count}')
            
            
if __name__ == '__main__':
    app = Search()
    # app.setup()
    app.main()
    