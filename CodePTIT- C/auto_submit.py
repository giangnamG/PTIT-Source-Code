import requests
from bs4 import BeautifulSoup
import time
import os
class AutoSubCode:
    
    def __init__(self):
        self.QuestionCodesInWebSite = []
        self.Source = os.listdir('./code')
        self.count = 0  
    def CrawQuestionCode(self,page):  
        burp0_url = f"https://code.ptit.edu.vn:443/student/question?page={page}"
        burp0_cookies = {"_ga_MRZBEE26NG": "GS1.1.1633912882.1.0.1633912997.0", "ozi": "2000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QfMpxT9GHDDyXxopsLOCc7o5lhpRMmdSVeg_yz9O3jfrYhF-D0.1", "_ga": "GA1.1.836918944.1633912882", "__zi": "3000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QvMpxTDGHDDzXV7zb1v7qpJ1zVsH4aITDCFoifWHGvi_m_w_D0.1", "_ga_YJ08BVKT4Q": "GS1.1.1689226527.8.1.1689226548.0.0.0", "XSRF-TOKEN": "eyJpdiI6InlxMG1FVUN4WGVtTFJiRmxPWUpBWGc9PSIsInZhbHVlIjoiRkhmMVk2dHFqQ0wxaGxlcGtEdlRYVnZEWnVPUmR0Z05WUmVpTEk4NE1QOGNNSjNMVjdGMVora1YvelZsY0NXZVN0UzIweUVMTkJ5RWFON2c3Qk9OVnBIQkJPMVpwWEZDVzRaSFJyL0dZMUx0YklvQmhyazk1N1hRQ1pUQm90dEgiLCJtYWMiOiIxY2RlNjVjZGQxYmE5Njc4NjkwODFhYTJmOTdjNTI5YjYyZWU1NWVhNzBiZTExYTIzYThiYzkxYjU3MjUyMzIzIiwidGFnIjoiIn0%3D", "ptit_code_session": "eyJpdiI6ImhVU1NQMEk3VXE4Q1hpMC9wcXFORUE9PSIsInZhbHVlIjoiZ0Z2b1k2NUtUeUNabzdmM25aYnYrMmFqa21XQWdmdVZVbWoreTVVcXE4SURWWXcxby9BK3pHVElYaDErd3F5U2h1S2w3OWUwa1Q2WWh4dTVTYlpoZHR0ZWZvMnFaaktJNktLTS9USUNHazNFLzk4NG1kT0UwTkhodzRYcDV3cFgiLCJtYWMiOiI3NGMxOTg0ZjM2MzA5ODA0MWY0Mjk4NzE5MjZkYWUxMGNmNzYzNmIwNTllYzg2ZDQ2YTg0MWYyNDcxOGY2NmU5IiwidGFnIjoiIn0%3D"}
        burp0_headers = {"Cache-Control": "max-age=0", "Sec-Ch-Ua": "\"Not/A)Brand\";v=\"99\", \"Microsoft Edge\";v=\"115\", \"Chromium\";v=\"115\"", "Sec-Ch-Ua-Mobile": "?0", "Sec-Ch-Ua-Platform": "\"Windows\"", "Upgrade-Insecure-Requests": "1", "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/115.0.0.0 Safari/537.36 Edg/115.0.1901.200", "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7", "Sec-Fetch-Site": "none", "Sec-Fetch-Mode": "navigate", "Sec-Fetch-User": "?1", "Sec-Fetch-Dest": "document", "Accept-Encoding": "gzip, deflate", "Accept-Language": "vi,en-US;q=0.9,en;q=0.8"}
        res = requests.get(burp0_url, headers=burp0_headers, cookies=burp0_cookies)

        soup = BeautifulSoup(res.content, 'html.parser')
        tbody = soup.find('tbody')  
        rows = tbody.find_all('tr')
        for row in rows:
            td = row.find_all('td')
            QuestionCode = td[2].find('a').text.strip() 
            QuestionName = td[3].find('a').text.strip()
            self.QuestionCodesInWebSite.append({"QuestionName" : QuestionName,"QuestionCode" : QuestionCode})
    def Find_file_In_Source(self, CodeQuestion):
        for _ in self.Source:
            if CodeQuestion in _:
                return _
    def SubCode(self):
        burp0_url = "https://code.ptit.edu.vn:443/student/solution"
        burp0_cookies = {"_ga_MRZBEE26NG": "GS1.1.1633912882.1.0.1633912997.0", "ozi": "2000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QfMpxT9GHDDyXxopsLOCc7o5lhpRMmdSVeg_yz9O3jfrYhF-D0.1", "_ga": "GA1.1.836918944.1633912882", "__zi": "3000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QvMpxTDGHDDzXV7zb1v7qpJ1zVsH4aITDCFoifWHGvi_m_w_D0.1", "_ga_YJ08BVKT4Q": "GS1.1.1689226527.8.1.1689226548.0.0.0", "XSRF-TOKEN": "eyJpdiI6IjA4ZnRJbXcybW83OEcwZE1xWGMxTmc9PSIsInZhbHVlIjoieVhycjMzU1dPSnUzVFZzQU5EalUvTlRJM1o5bFJMc1B5Ni9zWTJhblZtRXlTWW90cWNBRjRuaWE4K2FBVE9GYjEvY2gxcWlPd2wvYjN3M0lRbXA4NWEwTi9rVXdJWWRRYWRzUlB6Qm9KbkNQSUxLMlowWUpqWlJZa2x5eExlVWwiLCJtYWMiOiJhMTA0ZWVlNDIxNjY5ZTMyODdmYmI3YTc5YzIyY2M1YjVlZTVlYjliNjE1NmYzYmIzZjExMmIzZDM3NDE4NjZkIiwidGFnIjoiIn0%3D", "ptit_code_session": "eyJpdiI6InhCMTIyWnY4T1JIa3FFOVJpQkc0dVE9PSIsInZhbHVlIjoicEFicGd3cDF5RWhrRnlBb3JzYzIzMXR2NlluaVF2ZUV3U2t5RXBHcnl0RlUxZENzR3BuZmlGSkt5d3VkbXhtMzB5aW5tMUxpWGhCdkF6MW1oTmhLUHdPUUx5RXNmcjFZMjNCbVdRNjdvN0VvZm9hUzV3WGpaQ0NPUEZTV3V5V3UiLCJtYWMiOiJhYjliYjJkNTI5Yzg2NTlmOTg2YzU5NGUwMDI2MDExNDdmYzY4YzFmOTY4YWIyOWZhNDllMzJmMjdhYzA5NjA3IiwidGFnIjoiIn0%3D"}
        burp0_headers = {"Cache-Control": "max-age=0", "Sec-Ch-Ua": "\"Not/A)Brand\";v=\"99\", \"Microsoft Edge\";v=\"115\", \"Chromium\";v=\"115\"", "Sec-Ch-Ua-Mobile": "?0", "Sec-Ch-Ua-Platform": "\"Windows\"", "Upgrade-Insecure-Requests": "1", "Origin": "https://code.ptit.edu.vn", "Content-Type": "multipart/form-data; boundary=----WebKitFormBoundaryAJZEraAgZmNtbSjN", "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/115.0.0.0 Safari/537.36 Edg/115.0.1901.200", "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7", "Sec-Fetch-Site": "same-origin", "Sec-Fetch-Mode": "navigate", "Sec-Fetch-User": "?1", "Sec-Fetch-Dest": "document", "Referer": "https://code.ptit.edu.vn/student/question/C01001", "Accept-Encoding": "gzip, deflate", "Accept-Language": "vi,en-US;q=0.9,en;q=0.8"}

        for file in self.QuestionCodesInWebSite:
            QuestionCode = file["QuestionCode"]
            QuestionName = self.Find_file_In_Source(QuestionCode)
            try:
                FileContent = self.GetContentFile("./code/"+QuestionName)
            except :
                pass
            if FileContent is not None:
                print(f"{QuestionName}\n")
                burp0_data = "------WebKitFormBoundaryvAcNhMv41Mef8Vr7\r\nContent-Disposition: form-data; name=\"_token\"\r\n\r\n89YrBlXk3gYW7QgP2bNiGh4hi0jTL5HUuuf3mWy6\r\n------WebKitFormBoundaryvAcNhMv41Mef8Vr7\r\nContent-Disposition: form-data; name=\"question\"\r\n\r\n"+QuestionCode+"\r\n------WebKitFormBoundaryvAcNhMv41Mef8Vr7\r\nContent-Disposition: form-data; name=\"compiler\"\r\n\r\n1\r\n------WebKitFormBoundaryvAcNhMv41Mef8Vr7\r\nContent-Disposition: form-data; name=\"code_file\"; filename=\"what_ever_name.cpp\"\r\nContent-Type: application/octet-stream\r\n\r\n"+FileContent+"\r\n------WebKitFormBoundaryvAcNhMv41Mef8Vr7--\r\n"
                burp0_data = "------WebKitFormBoundaryAJZEraAgZmNtbSjN\r\nContent-Disposition: form-data; name=\"_token\"\r\n\r\n89YrBlXk3gYW7QgP2bNiGh4hi0jTL5HUuuf3mWy6\r\n------WebKitFormBoundaryAJZEraAgZmNtbSjN\r\nContent-Disposition: form-data; name=\"question\"\r\n\r\n"+QuestionCode+"\r\n------WebKitFormBoundaryAJZEraAgZmNtbSjN\r\nContent-Disposition: form-data; name=\"compiler\"\r\n\r\n1\r\n------WebKitFormBoundaryAJZEraAgZmNtbSjN\r\nContent-Disposition: form-data; name=\"code_file\"; filename=\"what_ever_name.cpp\"\r\nContent-Type: application/octet-stream\r\n\r\n"+FileContent+"\r\n------WebKitFormBoundaryAJZEraAgZmNtbSjN--\r\n"
                try:
                    requests.post(burp0_url, headers=burp0_headers, cookies=burp0_cookies, data=burp0_data)
                    time.sleep(1.5)
                    self.count += 1
                except UnicodeEncodeError as e:
                    pass  
    def GetContentFile(self,path):
        try:
            with open(path) as f:
                try:
                    line = f.readlines()
                    return "".join(line)
                except UnicodeDecodeError:
                    pass
                f.close()
        except FileNotFoundError as e:
            pass
if __name__ == '__main__':
    app = AutoSubCode()
    for _ in range(1,5):
        app.QuestionCodesInWebSite = []  
        app.CrawQuestionCode(_)
        app.SubCode()
    print(app.count)