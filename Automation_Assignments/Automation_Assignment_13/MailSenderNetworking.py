import urllib.error
import urllib.request
import smtplib
from email import encoders
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email.mime.multipart import MIMEMultipart

def is_connected():
    try:
        print("Checing internet connection...")
        urllib.request.urlopen('http://www.google.com',timeout = 5)
        print("Internet connection is available.\n")
        return True
    except urllib.error.URLError as err:
        print("Failed to connect to the internet:",err)
        return False
    
def MailSender(filename,toaddress,time,startTime,fileScanned,cntDuplicate):
    try:
        fromaddr = "rushi.sable716@gmail.com"
        toaddr = toaddress

        msg = MIMEMultipart()

        msg['From'] = fromaddr
        msg['To'] = toaddr
        
        body = f"""
        Hello {toaddr}
        Welcome to Marvellous Infosystems.
        Please find attached doucument which contains name of duplicates files which are deleted.
        Log file is created at : {time}

        Starting time of scanning : {startTime}
        Total number of files scanned : {fileScanned}
        Total number of duplicate files : {cntDuplicate}

        This is auto generated mail.

        Thanks and regards,
        Rsuhikesh Vitthal Sable
        Marvellous Infosystems
        {toaddr,time}
        """

        Subject = """
        Marvellous Infosystems Process log generated at : {time}
        """

        msg['Subject'] = Subject
        msg.attach(MIMEText(body,'plain'))
        attachment = open(filename,"rb")
        print(f"Log file name = {filename}")
        p = MIMEBase('application','octet-stream')
        p.set_payload(attachment.read())
        encoders.encode_base64(p)
        p.add_header('Content-Disposition',f"attachment; filename = {filename}")
        msg.attach(p)
        s = smtplib.SMTP('smtp.gmail.com',587)
        s.starttls()
        
        passkey = "ptsx jbpd cypr eynd"
        s.login(fromaddr,passkey)
        
        text = msg.as_string()
        s.sendmail(fromaddr,toaddr,text)
        s.quit()

        print("Log file successfully sent through Mail\n")

    except Exception as E:
        print("Unable to send mail.",E)

