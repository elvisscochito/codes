import smtplib, ssl
from email.message import EmailMessage

def send_email(subject, from_sender, password, to_receiver, body):
    port = 465  # For SSL
    smtp_server = "smtp.gmail.com"

    body = body

    em = EmailMessage()
    em['Subject'] = subject = subject
    em['From'] = from_sender = from_sender
    em['To'] = to_receiver = to_receiver
    em.set_content(body)

    context = ssl.create_default_context()
    
    with smtplib.SMTP_SSL(smtp_server, port, context=context) as server:
        try:
            server.login(from_sender, password)
            server.sendmail(from_sender, to_receiver, em.as_string())
            print("email sent")
        except:
            print("couldn't login into account or sent the email")

if __name__ == "__main__":
    send_email("Subject test", "elviss.dominguez27@gmail.com", "rmhhvknnxyotixbf", "elvirodominguezsoriano@gmail.com", "Body test")
