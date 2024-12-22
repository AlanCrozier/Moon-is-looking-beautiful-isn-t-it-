function ispallin()
{
    let str=document.getElementById("a");
    let a=" ";
    var i,x=0;
    var ch, ch1,ch2;
        for(i=str.len;i>=0;i--)
        {
           ch=str.charAt(i);
           a=a+ch;
        }
    for(i=0;i<=str.len;i++)
    {
        ch1=str.charAt(i);
        ch2=a.charAt(i);
        if(ch1!=ch2)
        {
            console.log("not");
            break;
        }
        else
        {
            x++;
        }
    }
    if(x==str.len)
    {
        console.log("yes");
    }
}